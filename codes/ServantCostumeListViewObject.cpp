void ServantCostumeListViewObject___ctor(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932290 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5932290 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantCostumeListViewObject__Awake(ServantCostumeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_5932288 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___);
    byte_5932288 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewItemDraw___);
  this->fields.itemDraw = (struct ServantCostumeListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


ServantCostumeListViewItem_o *ServantCostumeListViewObject__GetItem(
        ServantCostumeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932289 & 1) == 0 )
  {
    sub_21FFC50(&ServantCostumeListViewItem_TypeInfo);
    byte_5932289 = 1;
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
  struct ListViewItem_o *linkItem; // x8
  bool v10; // w22
  ListViewItem_c *klass; // x10
  unsigned int naturalAligment; // w11
  unsigned int v13; // w23
  int32_t dispMode; // w24
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

  if ( (byte_593228B & 1) == 0 )
  {
    sub_21FFC50(&ServantCostumeListViewItem_TypeInfo);
    byte_593228B = 1;
  }
  linkItem = this->fields.linkItem;
  v10 = this->fields.state == 0;
  if ( initMode == 4 )
  {
    if ( !linkItem )
    {
      v13 = 0;
      v10 = 1;
      goto LABEL_14;
    }
    klass = linkItem->klass;
    naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
    v10 = 1;
  }
  else
  {
    if ( !linkItem )
    {
LABEL_9:
      v13 = 0;
      goto LABEL_14;
    }
    klass = linkItem->klass;
    naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment;
  }
  if ( klass->_2.naturalAligment < naturalAligment )
    goto LABEL_9;
  if ( (ServantCostumeListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == ServantCostumeListViewItem_TypeInfo )
    v13 = initMode;
  else
    v13 = 0;
LABEL_14:
  dispMode = this->fields.dispMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(ServantCostumeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v13 <= 4 )
  {
    v31 = dword_ECFAA0[v13];
    this->fields.dispMode = dword_ECFA8C[v13];
    this->fields.state = v31;
  }
  if ( v10 || dispMode != this->fields.dispMode )
    ServantCostumeListViewObject__SetupDisp(this, v24);
  v32 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v25, v26, v27, v28, v29, v30);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


void ServantCostumeListViewObject__InitItem(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeListViewObject__Init_37908420(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  ServantCostumeListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeListViewObject__Init_37909224(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  ServantCostumeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeListViewObject__Init_37914572(
        ServantCostumeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  ServantCostumeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void ServantCostumeListViewObject__OnClickSelect(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  ServantCostumeListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x10
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_593228E & 1) == 0 )
  {
    sub_21FFC50(&ServantCostumeListViewItem_TypeInfo);
    sub_21FFC50(&Method_ServantCostumeListViewObject_OnClickSelect__);
    sub_21FFC50(&StringLiteral_10253/*"OnClickSelectBase"*/);
    byte_593228E = 1;
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
          v5 = (_QWORD *)sub_21FFC68(Method_ServantCostumeListViewObject_OnClickSelect__);
        v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
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
            (System_String_o *)StringLiteral_10253/*"OnClickSelectBase"*/,
            (Il2CppObject *)this,
            0);
          return;
        }
      }
    }
    sub_21FFECC(linkItem, method);
  }
}


void ServantCostumeListViewObject__OnLongPush(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  ServantCostumeListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  _QWORD *monitor; // x8

  v2 = this;
  if ( (byte_593228F & 1) == 0 )
  {
    sub_21FFC50(&ServantCostumeListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_10317/*"OnLongPushListView"*/);
    this = (ServantCostumeListViewObject_o *)sub_21FFC50(&StringLiteral_10336/*"OnPressCancel"*/);
    byte_593228F = 1;
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
        UnityEngine_GameObject__SendMessage_83224792(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10336/*"OnPressCancel"*/,
          0);
        this = (ServantCostumeListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10317/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0);
          return;
        }
      }
LABEL_12:
      sub_21FFECC(this, method);
    }
  }
}


void ServantCostumeListViewObject__SetInput(
        ServantCostumeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v8; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x1
  ServantCostumeListViewItemDraw_o *v12; // x0

  if ( (byte_593228A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantCostumeListViewItem_TypeInfo);
    byte_593228A = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = ServantCostumeListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ServantCostumeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCostumeListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_21FFECC(0, v11);
    ServantCostumeListViewItemDraw__SetInput(v12, (ServantCostumeListViewItem_o *)v11, v8);
  }
}


void ServantCostumeListViewObject__SetItem(
        ServantCostumeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void ServantCostumeListViewObject__SetItem_37913600(
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  ServantCostumeListViewItemDraw_o *v11; // x0

  if ( (byte_593228C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantCostumeListViewItem_TypeInfo);
    byte_593228C = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_21FFECC(0, v9);
    ServantCostumeListViewItemDraw__SetItem(v11, (ServantCostumeListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


void ServantCostumeListViewObject__Start(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    ServantCostumeListViewObject__Init_37908420(this, 2, v2);
}


System_String_o *ServantCostumeListViewObject__ToString(ServantCostumeListViewObject_o *this, const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_593228D & 1) == 0 )
  {
    sub_21FFC50(&ServantCostumeListViewItemDraw_DispMode_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    byte_593228D = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)ServantCostumeListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_240362C(&v11, 0, 0, 0);
  return System_String__Concat_75481624(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantCostumeListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5932286 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932286 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantCostumeListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  ServantCostumeListViewObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantCostumeListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5932287 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932287 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantCostumeListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  ServantCostumeListViewObject__Awake(v13, v14);
}