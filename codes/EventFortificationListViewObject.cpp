void __fastcall EventFortificationListViewObject___ctor(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BCBA8F & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    byte_4BCBA8F = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventFortificationListViewObject__Awake(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4BCBA88 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___, method);
    byte_4BCBA88 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C1AE30(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___);
  this->fields.itemDraw = (struct EventFortificationListViewItemDraw_o *)Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


EventFortificationListViewItem_o *__fastcall EventFortificationListViewObject__GetItem(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BCBA89 & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, method);
    byte_4BCBA89 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
    return (EventFortificationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init(
        EventFortificationListViewObject_o *this,
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
  PartyOrganizationUtility_o *p_CallbackFunc; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t v32; // w9
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4BCBA8A & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BCBA8A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
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
  ((void (__fastcall *)(EventFortificationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C1AE30(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (PartyOrganizationUtility_o *)&this->fields.CallbackFunc;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.CallbackFunc,
    (int64_t)callbackFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( v11 <= 4 )
  {
    v32 = dword_C333C4[v11];
    this->fields.dispMode = dword_C333B0[v11];
    this->fields.state = v32;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    EventFortificationListViewObject__SetupDisp(this, v25);
  klass = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0LL;
    sub_1C1AB78(p_CallbackFunc, 0LL, v26, v27, v28, v29, v30, v31);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall EventFortificationListViewObject__InitItem(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_47006928(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  EventFortificationListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_47007576(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  EventFortificationListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_47025052(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  EventFortificationListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EventFortificationListViewObject__OnClickSelect(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventFortificationListViewItem_o *v9; // x20
  UnityEngine_Component_o *manager; // x0
  __int64 v11; // x10
  int monitor_high; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 *v18; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4BCBA8D & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, method);
    sub_1C1ABD4(&EventFortificationListViewManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_EventFortificationListViewObject_OnClickSelect__, v4);
    sub_1C1ABD4(&StringLiteral_10053/*"OnClickSelectObject"*/, v5);
    sub_1C1ABD4(&StringLiteral_10054/*"OnClickSelectPush"*/, v6);
    byte_4BCBA8D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
        v9 = (EventFortificationListViewItem_o *)this->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      goto LABEL_35;
    v11 = LOBYTE(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
      || (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != EventFortificationListViewManager_TypeInfo )
    {
      goto LABEL_35;
    }
    monitor_high = HIDWORD(manager[21].monitor);
    if ( monitor_high == 2 )
    {
      v16 = Method_EventFortificationListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewObject_OnClickSelect__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
      if ( v9 )
      {
        EventFortificationListViewItem__SwapChoice(v9, 0LL);
        goto LABEL_23;
      }
LABEL_35:
      sub_1C1AE30(manager, method);
    }
    if ( monitor_high == 1 )
    {
      v13 = Method_EventFortificationListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewObject_OnClickSelect__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 11, 0, 0LL);
      if ( v9 )
      {
        EventFortificationListViewItem__SwapLock(v9, 0LL);
LABEL_23:
        EventFortificationListViewObject__SetupDisp(this, v15);
        return;
      }
      goto LABEL_35;
    }
    if ( !v9 )
      goto LABEL_35;
    if ( monitor_high == 3 )
    {
      if ( !EventFortificationListViewItem__get_IsCanNotSelectPush(v9, 0LL) )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        if ( !manager )
          goto LABEL_35;
        v18 = &StringLiteral_10054/*"OnClickSelectPush"*/;
        goto LABEL_34;
      }
    }
    else if ( !v9->fields.isCanNotSelect )
    {
      v18 = &StringLiteral_10053/*"OnClickSelectObject"*/;
LABEL_34:
      UnityEngine_Component__SendMessage(manager, (System_String_o *)*v18, (Il2CppObject *)this, 0LL);
      return;
    }
    v19 = Method_EventFortificationListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewObject_OnClickSelect__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0LL);
  }
}


void __fastcall EventFortificationListViewObject__OnLongPush(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v2 = this;
  if ( (byte_4BCBA8E & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, method);
    sub_1C1ABD4(&Method_EventFortificationListViewObject_OnLongPush__, v3);
    sub_1C1ABD4(&StringLiteral_10109/*"OnLongPushListView"*/, v4);
    this = (EventFortificationListViewObject_o *)sub_1C1ABD4(&StringLiteral_10127/*"OnPressCancel"*/, v5);
    byte_4BCBA8E = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
    {
      if ( BYTE3(linkItem[1].fields.sortValue2B) )
      {
        v8 = Method_EventFortificationListViewObject_OnLongPush__;
        if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnLongPush__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C1ABEC(Method_EventFortificationListViewObject_OnLongPush__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
        return;
      }
      if ( !linkItem[1].monitor )
        return;
      this = (EventFortificationListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v2,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_70775872(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10127/*"OnPressCancel"*/,
          0LL);
        this = (EventFortificationListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10109/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
      }
    }
    sub_1C1AE30(this, method);
  }
}


void __fastcall EventFortificationListViewObject__SetItem(
        EventFortificationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41974544((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventFortificationListViewObject__SetItem_47024352(
        EventFortificationListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall EventFortificationListViewObject__SetupDisp(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  EventFortificationListViewItemDraw_o *v10; // x0

  if ( (byte_4BCBA8B & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItem_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCBA8B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationListViewItem_TypeInfo )
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
      sub_1C1AE30(0LL, v8);
    EventFortificationListViewItemDraw__SetItem(
      v10,
      (EventFortificationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


void __fastcall EventFortificationListViewObject__Start(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    EventFortificationListViewObject__Init_47006928(this, 2, v2);
}


System_String_o *__fastcall EventFortificationListViewObject__ToString(
        EventFortificationListViewObject_o *this,
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

  if ( (byte_4BCBA8C & 1) == 0 )
  {
    sub_1C1ABD4(&EventFortificationListViewItemDraw_DispMode_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_117/*" "*/, v3);
    byte_4BCBA8C = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)EventFortificationListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1DD9840(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_63051628(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
}


void __fastcall EventFortificationListViewObject__add_CallbackFunc(
        EventFortificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BCBA86 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCBA86 = 1;
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
    v9 = sub_1C560C4(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  EventFortificationListViewObject__remove_CallbackFunc(v11, v12, v13);
}


void __fastcall EventFortificationListViewObject__remove_CallbackFunc(
        EventFortificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BCBA87 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCBA87 = 1;
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
    v9 = sub_1C560C4(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  EventFortificationListViewObject__Awake(v11, v12);
}