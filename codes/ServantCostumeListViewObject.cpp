void ServantCostumeListViewObject___ctor(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A8C1 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2A8C1 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantCostumeListViewObject__Awake(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4D2A8B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___);
    byte_4D2A8B9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___);
  this->fields.itemDraw = (struct ServantCostumeListViewItemDraw_o *)Component_object;
  sub_1C93A78(&this->fields.itemDraw, Component_object);
}


ServantCostumeListViewItem_o *ServantCostumeListViewObject__GetItem(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2A8BA & 1) == 0 )
  {
    sub_1C93AD4(&ServantCostumeListViewItem_TypeInfo);
    byte_4D2A8BA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCostumeListViewItem_TypeInfo )
    return (ServantCostumeListViewItem_o *)this->fields.linkItem;
  return 0;
}


void ServantCostumeListViewObject__Init(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x11
  unsigned int v11; // w23
  int32_t dispMode; // w22
  bool v13; // w21
  bool v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  bool v17; // w24
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  struct System_Action_o *v21; // x19

  if ( (byte_4D2A8BC & 1) == 0 )
  {
    sub_1C93AD4(&ServantCostumeListViewItem_TypeInfo);
    byte_4D2A8BC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCostumeListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(ServantCostumeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C93A78(&this->fields.callbackFunc, callbackFunc);
  if ( v11 <= 4 )
  {
    v20 = dword_D333E4[v11];
    this->fields.dispMode = dword_D333D0[v11];
    this->fields.state = v20;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    ServantCostumeListViewObject__SetupDisp(this, v19);
  v21 = *p_callbackFunc;
  if ( *p_callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C93A78(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


void ServantCostumeListViewObject__InitItem(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void ServantCostumeListViewObject__Init_31959980(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
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
  ServantCostumeListViewObject__Init(this, initMode, 0, v4, v10, v3);
}


void ServantCostumeListViewObject__Init_31960784(
        ServantCostumeListViewObject_o *this,
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
  ServantCostumeListViewObject__Init(this, initMode, callbackFunc, v4, v11, method);
}


void ServantCostumeListViewObject__Init_31966184(
        ServantCostumeListViewObject_o *this,
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
  ServantCostumeListViewObject__Init(this, initMode, callbackFunc, delay, v11, method);
}


void ServantCostumeListViewObject__OnClickSelect(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  ServantCostumeListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4D2A8BF & 1) == 0 )
  {
    sub_1C93AD4(&ServantCostumeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_ServantCostumeListViewObject_OnClickSelect__);
    sub_1C93AD4(&StringLiteral_9922/*"OnClickSelectBase"*/);
    byte_4D2A8BF = 1;
  }
  linkItem = (ServantCostumeListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCostumeListViewItem_TypeInfo )
    {
      if ( ServantCostumeListViewItem__get_IsCanNotSelect(linkItem, method) )
      {
        v5 = Method_ServantCostumeListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_ServantCostumeListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C93AEC(Method_ServantCostumeListViewObject_OnClickSelect__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
        return;
      }
      linkItem = (ServantCostumeListViewItem_o *)this->fields.manager;
      if ( linkItem )
      {
        ListViewManager__ClearScrollBarValue((ListViewManager_o *)linkItem, 1, 0);
        linkItem = (ServantCostumeListViewItem_o *)this->fields.manager;
        if ( linkItem )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)linkItem,
            (System_String_o *)StringLiteral_9922/*"OnClickSelectBase"*/,
            (Il2CppObject *)this,
            0);
          return;
        }
      }
    }
    sub_1C93D2C(linkItem, method);
  }
}


void ServantCostumeListViewObject__OnLongPush(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  ServantCostumeListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  _QWORD *monitor; // x8

  v2 = this;
  if ( (byte_4D2A8C0 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCostumeListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_9984/*"OnLongPushListView"*/);
    this = (ServantCostumeListViewObject_o *)sub_1C93AD4(&StringLiteral_10002/*"OnPressCancel"*/);
    byte_4D2A8C0 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
      goto LABEL_12;
    if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewItem_TypeInfo )
      goto LABEL_12;
    monitor = linkItem[1].monitor;
    if ( !monitor )
      goto LABEL_12;
    if ( monitor[2] )
    {
      this = (ServantCostumeListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_72101276(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10002/*"OnPressCancel"*/,
          0);
        this = (ServantCostumeListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_9984/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0);
          return;
        }
      }
LABEL_12:
      sub_1C93D2C(this, method);
    }
  }
}


void ServantCostumeListViewObject__SetInput(
        ServantCostumeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  ServantCostumeListViewItemDraw_o *v10; // x0

  if ( (byte_4D2A8BB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantCostumeListViewItem_TypeInfo);
    byte_4D2A8BB = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCostumeListViewItem_TypeInfo )
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
    ServantCostumeListViewItemDraw__SetInput(v10, (ServantCostumeListViewItem_o *)v9, v6);
  }
}


void ServantCostumeListViewObject__SetItem(
        ServantCostumeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void ServantCostumeListViewObject__SetItem_31965244(
        ServantCostumeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void ServantCostumeListViewObject__SetupDisp(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ServantCostumeListViewItemDraw_o *v9; // x0

  if ( (byte_4D2A8BD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantCostumeListViewItem_TypeInfo);
    byte_4D2A8BD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCostumeListViewItem_TypeInfo )
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
      sub_1C93D2C(0, v7);
    ServantCostumeListViewItemDraw__SetItem(v9, (ServantCostumeListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void ServantCostumeListViewObject__Start(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    ServantCostumeListViewObject__Init_31959980(this, 2, v2);
}


System_String_o *ServantCostumeListViewObject__ToString(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4D2A8BE & 1) == 0 )
  {
    sub_1C93AD4(&ServantCostumeListViewItemDraw_DispMode_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D2A8BE = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)ServantCostumeListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E502DC(&v10, 0, 0, 0);
  return System_String__Concat_64463988(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void ServantCostumeListViewObject__add_callbackFunc(
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

  if ( (byte_4D2A8B7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2A8B7 = 1;
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
  v11 = (ServantCostumeListViewObject_o *)sub_1C940C8(v8);
  ServantCostumeListViewObject__remove_callbackFunc(v11, v12, v13);
}


void ServantCostumeListViewObject__remove_callbackFunc(
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

  if ( (byte_4D2A8B8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2A8B8 = 1;
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
  v11 = (ServantCostumeListViewObject_o *)sub_1C940C8(v8);
  ServantCostumeListViewObject__Awake(v11, v12);
}