void __fastcall EventServantFatigueListViewObject___ctor(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F41A & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5F41A = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventServantFatigueListViewObject__Awake(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5F412 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
    byte_4A5F412 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
  this->fields.itemDraw = (struct EventServantFatigueListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewObject__GetItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A5F413 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    byte_4A5F413 = 1;
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
  unsigned int v11; // w23
  int32_t dispMode; // w22
  bool v13; // w21
  bool v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  bool v17; // w24
  ServantStatusBattleListViewItem_o *p_CallbackFunc; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A5F414 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    byte_4A5F414 = 1;
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
    sub_1B8880C(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.CallbackFunc, (int32_t)callbackFunc, v19, v20);
  if ( v11 <= 4 )
  {
    v24 = dword_BEF9E0[v11];
    this->fields.dispMode = dword_BEF9CC[v11];
    this->fields.state = v24;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    EventServantFatigueListViewObject__SetupDisp(this, v21);
  klass = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0LL;
    sub_1B88554(p_CallbackFunc, 0, v22, v23);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall EventServantFatigueListViewObject__InitItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_46164060(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_46164708(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_46181300(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall EventServantFatigueListViewObject__OnClickSelect(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  EventServantFatigueListViewItem_o *v5; // x20
  EventServantFatigueListViewObject_o *manager; // x21
  __int64 v7; // x10
  int CallbackFunc_high; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 *v14; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  v2 = this;
  if ( (byte_4A5F418 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&EventServantFatigueListViewManager_TypeInfo);
    sub_1B885B0(&Method_EventServantFatigueListViewObject_OnClickSelect__);
    sub_1B885B0(&StringLiteral_9866/*"OnClickSelectObject"*/);
    this = (EventServantFatigueListViewObject_o *)sub_1B885B0(&StringLiteral_9867/*"OnClickSelectPush"*/);
    byte_4A5F418 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
        v5 = (EventServantFatigueListViewItem_o *)v2->fields.linkItem;
      else
        v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    manager = (EventServantFatigueListViewObject_o *)v2->fields.manager;
    if ( !manager )
      goto LABEL_37;
    v7 = LOBYTE(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
      || (EventServantFatigueListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_37;
    }
    CallbackFunc_high = HIDWORD(manager[3].fields.CallbackFunc);
    if ( CallbackFunc_high == 2 )
    {
      v12 = Method_EventServantFatigueListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewObject_OnClickSelect__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
      if ( v5 )
      {
        EventServantFatigueListViewItem__SwapChoice(v5, 0LL);
        goto LABEL_23;
      }
LABEL_37:
      sub_1B8880C(this, method);
    }
    if ( CallbackFunc_high == 1 )
    {
      v9 = Method_EventServantFatigueListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewObject_OnClickSelect__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 11, 0LL);
      if ( v5 )
      {
        EventServantFatigueListViewItem__SwapLock(v5, 0LL);
LABEL_23:
        EventServantFatigueListViewObject__SetupDisp(v2, v11);
        return;
      }
      goto LABEL_37;
    }
    if ( !v5 )
      goto LABEL_37;
    if ( CallbackFunc_high == 3 )
    {
      if ( !EventServantFatigueListViewItem__get_IsCanNotSelectPush(v5, 0LL) )
      {
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( !this )
          goto LABEL_37;
        v14 = &StringLiteral_9867/*"OnClickSelectPush"*/;
        goto LABEL_31;
      }
    }
    else if ( EventServantFatigueListViewItem__get_IsBaseSvt(v5, 0LL)
           || !v5->fields.isFatigueRecover && !v5->fields.isCanNotSelect )
    {
      v14 = &StringLiteral_9866/*"OnClickSelectObject"*/;
      this = manager;
LABEL_31:
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)*v14,
        (Il2CppObject *)v2,
        0LL);
      return;
    }
    v15 = Method_EventServantFatigueListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B885C8(Method_EventServantFatigueListViewObject_OnClickSelect__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
  }
}


void __fastcall EventServantFatigueListViewObject__OnLongPush(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  v2 = this;
  if ( (byte_4A5F419 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_9921/*"OnLongPushListView"*/);
    this = (EventServantFatigueListViewObject_o *)sub_1B885B0(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4A5F419 = 1;
  }
  linkItem = v2->fields.linkItem;
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
                                                      (UnityEngine_Component_o *)v2,
                                                      0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_69440840(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/,
          0LL);
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_9921/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
      }
LABEL_11:
      sub_1B8880C(this, method);
    }
  }
}


void __fastcall EventServantFatigueListViewObject__SetItem(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventServantFatigueListViewObject__SetItem_46180600(
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
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventServantFatigueListViewItemDraw_o *v9; // x0

  if ( (byte_4A5F415 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F415 = 1;
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
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    EventServantFatigueListViewItemDraw__SetItem(
      v9,
      (EventServantFatigueListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void __fastcall EventServantFatigueListViewObject__Start(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    EventServantFatigueListViewObject__Init_46164060(this, 2, v2);
}


System_String_o *__fastcall EventServantFatigueListViewObject__ToString(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4A5F417 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItemDraw_DispMode_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    byte_4A5F417 = 1;
  }
  v11 = 0.0;
  v10 = 0LL;
  v8.klass = (System_Enum_c *)EventServantFatigueListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0LL);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DC2B8C(&v10, 0LL, 0LL, 0LL);
  return System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_117/*" "*/, v6, 0LL);
}


void __fastcall EventServantFatigueListViewObject__UpdateDisp(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 methodPtr_low; // x12
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventServantFatigueListViewItemDraw_o *v9; // x0

  if ( (byte_4A5F416 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F416 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(EventServantFatigueListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantFatigueListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    EventServantFatigueListViewItemDraw__SetFatigueMask(v9, (EventServantFatigueListViewItem_o *)v5, v8);
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

  if ( (byte_4A5F410 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F410 = 1;
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
    v9 = sub_1BC3AA0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5F411 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F411 = 1;
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
    v9 = sub_1BC3AA0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  EventServantFatigueListViewObject__Awake(v11, v12);
}