void __fastcall EventFortificationListViewObject___ctor(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A100 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B1A100 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventFortificationListViewObject__Awake(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1A0F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___, method, v2);
    byte_4B1A0F9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___);
  this->fields.itemDraw = (struct EventFortificationListViewItemDraw_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemDraw,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


EventFortificationListViewItem_o *__fastcall EventFortificationListViewObject__GetItem(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B1A0FA & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, method, v2);
    byte_4B1A0FA = 1;
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

  if ( (byte_4B1A0FB & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B1A0FB = 1;
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
    sub_1BCAA3C(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (PartyOrganizationUtility_o *)&this->fields.CallbackFunc;
  sub_1BCA784(
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
    v32 = dword_C0B444[v11];
    this->fields.dispMode = dword_C0B430[v11];
    this->fields.state = v32;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    EventFortificationListViewObject__SetupDisp(this, v25);
  klass = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0LL;
    sub_1BCA784(p_CallbackFunc, 0LL, v26, v27, v28, v29, v30, v31);
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
void __fastcall EventFortificationListViewObject__Init_46467304(
        EventFortificationListViewObject_o *this,
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
  EventFortificationListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_46467952(
        EventFortificationListViewObject_o *this,
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
  EventFortificationListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_46485360(
        EventFortificationListViewObject_o *this,
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
  EventFortificationListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EventFortificationListViewObject__OnClickSelect(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  EventFortificationListViewItem_o *v14; // x20
  UnityEngine_Component_o *manager; // x0
  __int64 v16; // x10
  int monitor_high; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  const MethodInfo *v20; // x1
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 *v23; // x8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0

  if ( (byte_4B1A0FE & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&EventFortificationListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventFortificationListViewObject_OnClickSelect__, v6, v7);
    sub_1BCA7E0(&StringLiteral_9999/*"OnClickSelectObject"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10000/*"OnClickSelectPush"*/, v10, v11);
    byte_4B1A0FE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
        v14 = (EventFortificationListViewItem_o *)this->fields.linkItem;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      goto LABEL_35;
    v16 = LOBYTE(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
      || (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] != EventFortificationListViewManager_TypeInfo )
    {
      goto LABEL_35;
    }
    monitor_high = HIDWORD(manager[21].monitor);
    if ( monitor_high == 2 )
    {
      v21 = Method_EventFortificationListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewObject_OnClickSelect__);
      v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      if ( v14 )
      {
        EventFortificationListViewItem__SwapChoice(v14, 0LL);
        goto LABEL_23;
      }
LABEL_35:
      sub_1BCAA3C(manager, method);
    }
    if ( monitor_high == 1 )
    {
      v18 = Method_EventFortificationListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewObject_OnClickSelect__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 11, 0LL);
      if ( v14 )
      {
        EventFortificationListViewItem__SwapLock(v14, 0LL);
LABEL_23:
        EventFortificationListViewObject__SetupDisp(this, v20);
        return;
      }
      goto LABEL_35;
    }
    if ( !v14 )
      goto LABEL_35;
    if ( monitor_high == 3 )
    {
      if ( !EventFortificationListViewItem__get_IsCanNotSelectPush(v14, 0LL) )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        if ( !manager )
          goto LABEL_35;
        v23 = &StringLiteral_10000/*"OnClickSelectPush"*/;
        goto LABEL_34;
      }
    }
    else if ( !v14->fields.isCanNotSelect )
    {
      v23 = &StringLiteral_9999/*"OnClickSelectObject"*/;
LABEL_34:
      UnityEngine_Component__SendMessage(manager, (System_String_o *)*v23, (Il2CppObject *)this, 0LL);
      return;
    }
    v24 = Method_EventFortificationListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewObject_OnClickSelect__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
  }
}


void __fastcall EventFortificationListViewObject__OnLongPush(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventFortificationListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  v3 = this;
  if ( (byte_4B1A0FF & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationListViewObject_OnLongPush__, v4, v5);
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, v6, v7);
    this = (EventFortificationListViewObject_o *)sub_1BCA7E0(&StringLiteral_10073/*"OnPressCancel"*/, v8, v9);
    byte_4B1A0FF = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventFortificationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewItem_TypeInfo )
    {
      if ( BYTE3(linkItem[1].fields.sortValue2B) )
      {
        v12 = Method_EventFortificationListViewObject_OnLongPush__;
        if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnLongPush__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1BCA7F8(Method_EventFortificationListViewObject_OnLongPush__);
        v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
        return;
      }
      if ( !linkItem[1].monitor )
        return;
      this = (EventFortificationListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v3,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_70135704(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10073/*"OnPressCancel"*/,
          0LL);
        this = (EventFortificationListViewObject_o *)v3->fields.manager;
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
    }
    sub_1BCAA3C(this, method);
  }
}


void __fastcall EventFortificationListViewObject__SetItem(
        EventFortificationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventFortificationListViewObject__SetItem_46484660(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  EventFortificationListViewItemDraw_o *v13; // x0

  if ( (byte_4B1A0FC & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1A0FC = 1;
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
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_1BCAA3C(0LL, v11);
    EventFortificationListViewItemDraw__SetItem(
      v13,
      (EventFortificationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v12);
  }
}


void __fastcall EventFortificationListViewObject__Start(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    EventFortificationListViewObject__Init_46467304(this, 2, v2);
}


System_String_o *__fastcall EventFortificationListViewObject__ToString(
        EventFortificationListViewObject_o *this,
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

  if ( (byte_4B1A0FD & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewItemDraw_DispMode_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    byte_4B1A0FD = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v11.klass = (System_Enum_c *)EventFortificationListViewItemDraw_DispMode_TypeInfo;
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

  if ( (byte_4B1A0F7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A0F7 = 1;
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
  sub_1BCACFC(v8);
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

  if ( (byte_4B1A0F8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A0F8 = 1;
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
  sub_1BCACFC(v8);
  EventFortificationListViewObject__Awake(v11, v12);
}