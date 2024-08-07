void __fastcall ServantCostumeListViewObject___ctor(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A025A6 & 1) == 0 )
  {
    sub_1B64A00(&ListViewObject_TypeInfo, method);
    byte_4A025A6 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewObject__Awake(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A0259E & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___, method);
    byte_4A0259E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64C5C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___);
  this->fields.itemDraw = (struct ServantCostumeListViewItemDraw_o *)Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


ServantCostumeListViewItem_o *__fastcall ServantCostumeListViewObject__GetItem(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A0259F & 1) == 0 )
  {
    sub_1B64A00(&ServantCostumeListViewItem_TypeInfo, method);
    byte_4A0259F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCostumeListViewItem_TypeInfo )
    return (ServantCostumeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Init(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x11
  unsigned int v11; // w23
  int32_t dispMode; // w22
  bool v13; // w21
  bool v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  bool v17; // w24
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A025A1 & 1) == 0 )
  {
    sub_1B64A00(&ServantCostumeListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A025A1 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCostumeListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  v13 = initMode == 4;
  v14 = this->fields.state == 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(ServantCostumeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64C5C(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v19, v20);
  if ( v11 <= 4 )
  {
    v24 = dword_BDE4B0[v11];
    this->fields.dispMode = dword_BDE49C[v11];
    this->fields.state = v24;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    ServantCostumeListViewObject__SetupDisp(this, v21);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, v22, v23);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall ServantCostumeListViewObject__InitItem(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Init_44932492(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  ServantCostumeListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Init_44933296(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  ServantCostumeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__Init_44938416(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9821 = 1;
  }
  ServantCostumeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall ServantCostumeListViewObject__OnClickSelect(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantCostumeListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4A025A4 & 1) == 0 )
  {
    sub_1B64A00(&ServantCostumeListViewItem_TypeInfo, method);
    sub_1B64A00(&Method_ServantCostumeListViewObject_OnClickSelect__, v3);
    sub_1B64A00(&StringLiteral_9820/*"OnClickSelectBase"*/, v4);
    byte_4A025A4 = 1;
  }
  linkItem = (ServantCostumeListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCostumeListViewItem_TypeInfo )
    {
      if ( ServantCostumeListViewItem__get_IsCanNotSelect(linkItem, method) )
      {
        v7 = Method_ServantCostumeListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_ServantCostumeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1B64A18(Method_ServantCostumeListViewObject_OnClickSelect__);
        v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
        return;
      }
      linkItem = (ServantCostumeListViewItem_o *)this->fields.manager;
      if ( linkItem )
      {
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)linkItem, 1, 0LL);
        linkItem = (ServantCostumeListViewItem_o *)this->fields.manager;
        if ( linkItem )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)linkItem,
            (System_String_o *)StringLiteral_9820/*"OnClickSelectBase"*/,
            (Il2CppObject *)this,
            0LL);
          return;
        }
      }
    }
    sub_1B64C5C(linkItem, method);
  }
}


void __fastcall ServantCostumeListViewObject__OnLongPush(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  ServantCostumeListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  _QWORD *monitor; // x8

  v2 = this;
  if ( (byte_4A025A5 & 1) == 0 )
  {
    sub_1B64A00(&ServantCostumeListViewItem_TypeInfo, method);
    sub_1B64A00(&StringLiteral_9878/*"OnLongPushListView"*/, v3);
    this = (ServantCostumeListViewObject_o *)sub_1B64A00(&StringLiteral_9897/*"OnPressCancel"*/, v4);
    byte_4A025A5 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
      goto LABEL_12;
    if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewItem_TypeInfo )
      goto LABEL_12;
    monitor = linkItem[1].monitor;
    if ( !monitor )
      goto LABEL_12;
    if ( monitor[2] )
    {
      this = (ServantCostumeListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_69118936(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_9897/*"OnPressCancel"*/,
          0LL);
        this = (ServantCostumeListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_9878/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
      }
LABEL_12:
      sub_1B64C5C(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewObject__SetInput(
        ServantCostumeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  ServantCostumeListViewItemDraw_o *v11; // x0

  if ( (byte_4A025A0 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B64A00(&ServantCostumeListViewItem_TypeInfo, v5);
    byte_4A025A0 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCostumeListViewItem_TypeInfo )
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
      sub_1B64C5C(0LL, v10);
    ServantCostumeListViewItemDraw__SetInput(v11, (ServantCostumeListViewItem_o *)v10, v7);
  }
}


void __fastcall ServantCostumeListViewObject__SetItem(
        ServantCostumeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40424740((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantCostumeListViewObject__SetItem_44937476(
        ServantCostumeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantCostumeListViewObject__SetupDisp(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantCostumeListViewItemDraw_o *v10; // x0

  if ( (byte_4A025A2 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&ServantCostumeListViewItem_TypeInfo, v3);
    byte_4A025A2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ServantCostumeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeListViewItem_TypeInfo )
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
      sub_1B64C5C(0LL, v8);
    ServantCostumeListViewItemDraw__SetItem(v10, (ServantCostumeListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall ServantCostumeListViewObject__Start(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    ServantCostumeListViewObject__Init_44932492(this, 2, v2);
}


System_String_o *__fastcall ServantCostumeListViewObject__ToString(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_4A025A3 & 1) == 0 )
  {
    sub_1B64A00(&ServantCostumeListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B64A00(&StringLiteral_117/*" "*/, v3);
    byte_4A025A3 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)ServantCostumeListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D8E8C0(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_61396396(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
}


void __fastcall ServantCostumeListViewObject__add_callbackFunc(
        ServantCostumeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A0259C & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A0259C = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  ServantCostumeListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantCostumeListViewObject__remove_callbackFunc(
        ServantCostumeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantCostumeListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A0259D & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_4A0259D = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  ServantCostumeListViewObject__Awake(v11, v12);
}