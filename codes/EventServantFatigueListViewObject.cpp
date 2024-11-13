void __fastcall EventServantFatigueListViewObject___ctor(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11217 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B11217 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventServantFatigueListViewObject__Awake(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4B1120F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___, method, v2);
    byte_4B1120F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
  this->fields.itemDraw = (struct EventServantFatigueListViewItemDraw_o *)Component_object;
  sub_1BCA784(&this->fields.itemDraw, Component_object);
}


EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewObject__GetItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B11210 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, method, v2);
    byte_4B11210 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
    return (EventServantFatigueListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x11
  int32_t v11; // w23
  int32_t dispMode; // w22
  bool v13; // w21
  bool v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  bool v17; // w24
  struct System_Action_o **p_CallbackFunc; // x21
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  struct System_Action_o *v21; // x19

  if ( (byte_4B11211 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B11211 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
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
  ((void (__fastcall *)(EventServantFatigueListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  sub_1BCA784(&this->fields.CallbackFunc, callbackFunc);
  if ( (unsigned int)v11 <= 4 )
  {
    v20 = dword_C0B444[v11];
    this->fields.dispMode = dword_C0B430[v11];
    this->fields.state = v20;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    EventServantFatigueListViewObject__SetupDisp(this, v19);
  v21 = *p_CallbackFunc;
  if ( *p_CallbackFunc )
  {
    *p_CallbackFunc = 0LL;
    sub_1BCA784(p_CallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v21->fields.m_target)(
      v21->fields.original_method_info,
      *(_QWORD *)&v21->fields.extra_arg);
  }
}


void __fastcall EventServantFatigueListViewObject__InitItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_31219324(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B109C1 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_31220260(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_31220344(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EventServantFatigueListViewObject__OnClickSelect(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventServantFatigueListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventServantFatigueListViewItem_o *v14; // x20
  EventServantFatigueListViewObject_o *manager; // x21
  __int64 v16; // x10
  int CallbackFunc_high; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  const MethodInfo *v20; // x1
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 *v23; // x8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0

  v3 = this;
  if ( (byte_4B11215 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&EventServantFatigueListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventServantFatigueListViewObject_OnClickSelect__, v6, v7);
    sub_1BCA7E0(&StringLiteral_9999/*"OnClickSelectObject"*/, v8, v9);
    this = (EventServantFatigueListViewObject_o *)sub_1BCA7E0(&StringLiteral_10000/*"OnClickSelectPush"*/, v10, v11);
    byte_4B11215 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
        v14 = (EventServantFatigueListViewItem_o *)v3->fields.linkItem;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    manager = (EventServantFatigueListViewObject_o *)v3->fields.manager;
    if ( !manager )
      goto LABEL_37;
    v16 = LOBYTE(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
      || (EventServantFatigueListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_37;
    }
    CallbackFunc_high = HIDWORD(manager[3].fields.CallbackFunc);
    if ( CallbackFunc_high == 2 )
    {
      v21 = Method_EventServantFatigueListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewObject_OnClickSelect__);
      v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      if ( v14 )
      {
        EventServantFatigueListViewItem__SwapChoice(v14, 0LL);
        goto LABEL_23;
      }
LABEL_37:
      sub_1BCAA3C(this, method);
    }
    if ( CallbackFunc_high == 1 )
    {
      v18 = Method_EventServantFatigueListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewObject_OnClickSelect__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 11, 0LL);
      if ( v14 )
      {
        EventServantFatigueListViewItem__SwapLock(v14, 0LL);
LABEL_23:
        EventServantFatigueListViewObject__SetupDisp(v3, v20);
        return;
      }
      goto LABEL_37;
    }
    if ( !v14 )
      goto LABEL_37;
    if ( CallbackFunc_high == 3 )
    {
      if ( !EventServantFatigueListViewItem__get_IsCanNotSelectPush(v14, 0LL) )
      {
        this = (EventServantFatigueListViewObject_o *)v3->fields.manager;
        if ( !this )
          goto LABEL_37;
        v23 = &StringLiteral_10000/*"OnClickSelectPush"*/;
        goto LABEL_31;
      }
    }
    else if ( EventServantFatigueListViewItem__get_IsBaseSvt(v14, 0LL)
           || !v14->fields.isFatigueRecover && !v14->fields.isCanNotSelect )
    {
      v23 = &StringLiteral_9999/*"OnClickSelectObject"*/;
      this = manager;
LABEL_31:
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)*v23,
        (Il2CppObject *)v3,
        0LL);
      return;
    }
    v24 = Method_EventServantFatigueListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BCA7F8(Method_EventServantFatigueListViewObject_OnClickSelect__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
  }
}


void __fastcall EventServantFatigueListViewObject__OnLongPush(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventServantFatigueListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  v3 = this;
  if ( (byte_4B11216 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, v4, v5);
    this = (EventServantFatigueListViewObject_o *)sub_1BCA7E0(&StringLiteral_10073/*"OnPressCancel"*/, v6, v7);
    byte_4B11216 = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewItem_TypeInfo )
    {
      goto LABEL_11;
    }
    if ( linkItem[1].monitor )
    {
      this = (EventServantFatigueListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v3,
                                                      0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_70135704(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10073/*"OnPressCancel"*/,
          0LL);
        this = (EventServantFatigueListViewObject_o *)v3->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10055/*"OnLongPushListView"*/,
            (Il2CppObject *)v3,
            0LL);
          return;
        }
      }
LABEL_11:
      sub_1BCAA3C(this, method);
    }
  }
}


void __fastcall EventServantFatigueListViewObject__SetItem(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventServantFatigueListViewObject__SetItem_31219556(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall EventServantFatigueListViewObject__SetupDisp(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  EventServantFatigueListViewItemDraw_o *v12; // x0

  if ( (byte_4B11212 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11212 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventServantFatigueListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BCAA3C(0LL, v11);
    EventServantFatigueListViewItemDraw__SetItem(
      v12,
      (EventServantFatigueListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}


void __fastcall EventServantFatigueListViewObject__Start(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    EventServantFatigueListViewObject__Init_31219324(this, 2, v2);
}


System_String_o *__fastcall EventServantFatigueListViewObject__ToString(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  float z; // w9
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v13; // [xsp+20h] [xbp-40h] BYREF
  float v14; // [xsp+28h] [xbp-38h]

  if ( (byte_4B11214 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItemDraw_DispMode_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    byte_4B11214 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v11.klass = (System_Enum_c *)EventServantFatigueListViewItemDraw_DispMode_TypeInfo;
  v11.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v6 = System_Enum__ToString(&v11, 0LL);
  z = this->fields.basePosition.fields.z;
  v8 = v6;
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v14 = z;
  v9 = (System_String_o *)sub_1DDA8EC(&v13, 0LL, 0LL, 0LL);
  return System_String__Concat_62412480(v8, (System_String_o *)StringLiteral_116/*" "*/, v9, 0LL);
}


void __fastcall EventServantFatigueListViewObject__UpdateDisp(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v8; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v10; // x1
  EventServantFatigueListViewItemDraw_o *v11; // x0

  if ( (byte_4B11213 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11213 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
      v8 = this->fields.linkItem;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1BCAA3C(0LL, v10);
    EventServantFatigueListViewItemDraw__UpdateDisp(v11, (EventServantFatigueListViewItem_o *)v8, 0LL);
  }
}


void __fastcall EventServantFatigueListViewObject__add_CallbackFunc(
        EventServantFatigueListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1120D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1120D = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventServantFatigueListViewObject_o *)sub_1BCACFC(v8);
  EventServantFatigueListViewObject__remove_CallbackFunc(v11, v12, v13);
}


void __fastcall EventServantFatigueListViewObject__remove_CallbackFunc(
        EventServantFatigueListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1120E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1120E = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventServantFatigueListViewObject_o *)sub_1BCACFC(v8);
  EventServantFatigueListViewObject__Awake(v11, v12);
}