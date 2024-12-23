void __fastcall UserPresentListViewObject___ctor(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B65A12 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewObject_TypeInfo, method);
    byte_4B65A12 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall UserPresentListViewObject__Awake(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B65A0B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___, method);
    byte_4B65A0B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BE4D28(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UserPresentListViewItemDraw___);
  this->fields.itemDraw = (struct UserPresentListViewItemDraw_o *)Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


UserPresentListViewItem_o *__fastcall UserPresentListViewObject__GetItem(
        UserPresentListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B65A0C & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentListViewItem_TypeInfo, method);
    byte_4B65A0C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
    return (UserPresentListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__Init(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // w9
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4B65A0E & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B65A0E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(UserPresentListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BE4D28(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)v11 <= 3 )
  {
    v30 = dword_BE14E0[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BE2100 + v11);
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    UserPresentListViewObject__SetupDisp(this, v23);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__Init_38419236(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__Init_38420440(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__Init_38420524(
        UserPresentListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  UserPresentListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall UserPresentListViewObject__OnClickCheck(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x0
  UserPresentListViewItem_c *v5; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B65A11 & 1) == 0 )
  {
    sub_1BE4ACC(&UserPresentListViewItem_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_9998/*"OnClickListCheck"*/, v3);
    byte_4B65A11 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = UserPresentListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentListViewItem_TypeInfo )
    {
      if ( LOBYTE(linkItem[1].fields.basePosition.fields.z) )
        return;
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9998/*"OnClickListCheck"*/, (Il2CppObject *)this, 0LL);
        return;
      }
    }
    else
    {
      sub_1BE4FE8(linkItem);
    }
    sub_1BE4D28(manager, v5);
  }
}


void __fastcall UserPresentListViewObject__OnClickSelect(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B65A10 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UserPresentListViewObject_OnClickSelect__, method);
    sub_1BE4ACC(&StringLiteral_10003/*"OnClickListView"*/, v3);
    byte_4B65A10 = 1;
  }
  if ( this->fields.linkItem )
  {
    v4 = Method_UserPresentListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_UserPresentListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BE4AE4(Method_UserPresentListViewObject_OnClickSelect__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BE4D28(0LL, v6);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10003/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall UserPresentListViewObject__OnDestroy(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentListViewObject__SetInput(
        UserPresentListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  UserPresentListViewItem_o *v7; // x1
  const MethodInfo *v8; // x3
  UserPresentListViewItemDraw_o *v9; // x0

  if ( (byte_4B65A0D & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, isInput);
    sub_1BE4ACC(&UserPresentListViewItem_TypeInfo, v5);
    byte_4B65A0D = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1BE4D28(0LL, v7);
    UserPresentListViewItemDraw__SetInput(v9, v7, isInput, v8);
  }
}


void __fastcall UserPresentListViewObject__SetItem(
        UserPresentListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41717728((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall UserPresentListViewObject__SetupDisp(UserPresentListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  UserPresentListViewItemDraw_o *v10; // x0

  if ( (byte_4B65A0F & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&UserPresentListViewItem_TypeInfo, v3);
    byte_4B65A0F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(UserPresentListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (UserPresentListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != UserPresentListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BE4D28(0LL, v8);
    UserPresentListViewItemDraw__SetItem(v10, (UserPresentListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall UserPresentListViewObject__add_callbackFunc(
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

  if ( (byte_4B65A09 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B65A09 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  UserPresentListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall UserPresentListViewObject__remove_callbackFunc(
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

  if ( (byte_4B65A0A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B65A0A = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  UserPresentListViewObject__Awake(v11, v12);
}


void __fastcall UserPresentListViewObject__setBlocked(
        UserPresentListViewObject_o *this,
        bool blocked,
        const MethodInfo *method)
{
  struct UserPresentListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (UserPresentListViewObject_o *)itemDraw->fields.blockObj) == 0LL )
    sub_1BE4D28(this, blocked);
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
    sub_1BE4D28(this, checkBoxed);
  }
  UserPresentListViewItemDraw__SetCheckCnt((UserPresentListViewItemDraw_o *)this, count, v7);
}