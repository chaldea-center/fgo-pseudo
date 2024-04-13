void __fastcall UserPresentListViewObject___ctor(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A96 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6A96 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall UserPresentListViewObject__Awake(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct UserPresentListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E6A8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42E6A8F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct UserPresentListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      dispObject,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___);
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


UserPresentListViewItem_o *__fastcall UserPresentListViewObject__GetItem(
        UserPresentListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E6A90 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6A90 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == UserPresentListViewItem_TypeInfo )
    return (UserPresentListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall UserPresentListViewObject__Init(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  int32_t v13; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w9
  System_Action_o *klass; // x19

  if ( (byte_42E6A92 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42E6A92 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v12 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == UserPresentListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(UserPresentListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)v13 <= 3 )
  {
    v30 = dword_322F598[v13];
    this->fields.dispMode = dword_32A072C[v13];
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    UserPresentListViewObject__SetupDisp(this, v23);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(klass, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__Init_21741556(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  UserPresentListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__Init_21742852(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  UserPresentListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__Init_21742916(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  UserPresentListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall UserPresentListViewObject__OnClickCheck(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x0
  UserPresentListViewItem_c *v9; // x1
  __int64 v10; // x9
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42E6A95 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10055/*"OnClickListCheck"*/, v5, v6, v7);
    byte_42E6A95 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = UserPresentListViewItem_TypeInfo;
    v10 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10
      && (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == UserPresentListViewItem_TypeInfo )
    {
      if ( LOBYTE(linkItem[1].fields.basePosition.fields.z) )
        return;
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10055/*"OnClickListCheck"*/, (Il2CppObject *)this, 0LL);
        return;
      }
    }
    else
    {
      manager = (UnityEngine_Component_o *)sub_B5D990(linkItem);
    }
    sub_B5D69C(manager, v9);
  }
}


void __fastcall UserPresentListViewObject__OnClickSelect(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42E6A94 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10060/*"OnClickListView"*/, v5, v6, v7);
    byte_42E6A94 = 1;
  }
  if ( this->fields.linkItem )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, v8);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10060/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall UserPresentListViewObject__OnDestroy(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall UserPresentListViewObject__SetInput(
        UserPresentListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  UserPresentListViewItem_o *v10; // x1
  const MethodInfo *v11; // x3
  UserPresentListViewItemDraw_o *v12; // x0

  if ( (byte_42E6A91 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v6, v7, v8);
    byte_42E6A91 = 1;
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
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_B5D69C(0LL, v10);
    UserPresentListViewItemDraw__SetInput(v12, v10, isInput, v11);
  }
}


void __fastcall UserPresentListViewObject__SetItem(
        UserPresentListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall UserPresentListViewObject__SetupDisp(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  UserPresentListViewItemDraw_o *v14; // x0

  if ( (byte_42E6A93 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserPresentListViewItem_TypeInfo, v5, v6, v7);
    byte_42E6A93 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&UserPresentListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == UserPresentListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v12);
    UserPresentListViewItemDraw__SetItem(v14, (UserPresentListViewItem_o *)linkItem, this->fields.dispMode, v13);
  }
}


void __fastcall UserPresentListViewObject__add_callbackFunc(
        UserPresentListViewObject_o *this,
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
  UserPresentListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E6A8D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A8D = 1;
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
  v12 = (UserPresentListViewObject_o *)sub_B5D990(v9);
  UserPresentListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall UserPresentListViewObject__remove_callbackFunc(
        UserPresentListViewObject_o *this,
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
  UserPresentListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E6A8E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6A8E = 1;
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
  v12 = (UserPresentListViewObject_o *)sub_B5D990(v9);
  UserPresentListViewObject__Awake(v12, v13);
}


void __fastcall UserPresentListViewObject__setBlocked(
        UserPresentListViewObject_o *this,
        bool blocked,
        const MethodInfo *method)
{
  struct UserPresentListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (UserPresentListViewObject_o *)itemDraw->fields.blockObj) == 0LL )
    sub_B5D69C(this, blocked);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, blocked, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__setCheckBoxed(
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
    || (v5 = this, (this = (UserPresentListViewObject_o *)itemDraw->fields.checkObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, checkBoxed, 0LL),
        (this = (UserPresentListViewObject_o *)v5->fields.itemDraw) == 0LL) )
  {
    sub_B5D69C(this, checkBoxed);
  }
  UserPresentListViewItemDraw__SetCheckCnt((UserPresentListViewItemDraw_o *)this, count, v7);
}