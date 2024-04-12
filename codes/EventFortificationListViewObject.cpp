void __fastcall EventFortificationListViewObject___ctor(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1DB2 & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42B1DB2 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventFortificationListViewObject__Awake(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventFortificationListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B1DAB & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___);
    byte_42B1DAB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B52A5C(0LL, v3);
  Component_srcLineSprite = (struct EventFortificationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


EventFortificationListViewItem_o *__fastcall EventFortificationListViewObject__GetItem(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_42B1DAC & 1) == 0 )
  {
    sub_B52984(&EventFortificationListViewItem_TypeInfo);
    byte_42B1DAC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventFortificationListViewItem_TypeInfo )
    return (EventFortificationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventFortificationListViewObject__Init(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  int32_t dispMode; // w22
  __int64 v11; // x12
  struct ListViewItem_o *v12; // x10
  char v13; // w23
  __int64 v14; // x12
  bool v15; // w25
  int32_t v16; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  char v19; // w23
  BattleServantConfConponent_o *p_CallbackFunc; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w9
  System_Action_o *klass; // x19

  if ( (byte_42B1DAD & 1) == 0 )
  {
    sub_B52984(&EventFortificationListViewItem_TypeInfo);
    byte_42B1DAD = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  if ( linkItem )
  {
    v11 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
    {
      if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == EventFortificationListViewItem_TypeInfo )
        v12 = this->fields.linkItem;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( initMode != 4 )
    {
      v14 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v14 )
      {
        v13 = 0;
        v12 = 0LL;
      }
      else
      {
        v13 = 0;
        if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == EventFortificationListViewItem_TypeInfo )
          v12 = this->fields.linkItem;
        else
          v12 = 0LL;
      }
      goto LABEL_18;
    }
  }
  else
  {
    v12 = 0LL;
    if ( initMode != 4 )
    {
      v13 = 0;
      goto LABEL_18;
    }
  }
  v13 = 1;
LABEL_18:
  v15 = this->fields.state == 0;
  if ( v12 )
    v16 = initMode;
  else
    v16 = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v16 != 0, 0LL);
  ((void (__fastcall *)(EventFortificationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v16 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(transform, v18);
  }
  v19 = v15 | v13;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (BattleServantConfConponent_o *)&this->fields.CallbackFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callbackFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( (unsigned int)v16 <= 4 )
  {
    v34 = dword_327DE10[v16];
    this->fields.dispMode = dword_327DDF0[v16];
    this->fields.state = v34;
  }
  if ( (v19 & 1) != 0 || dispMode != this->fields.dispMode )
    EventFortificationListViewObject__SetupDisp(this, v27);
  klass = (System_Action_o *)p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0LL;
    sub_B52920(p_CallbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall EventFortificationListViewObject__InitItem(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_28457820(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventFortificationListViewObject__Init(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_28458500(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventFortificationListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Init_28472588(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventFortificationListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


void __fastcall EventFortificationListViewObject__OnClickSelect(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  EventFortificationListViewItem_o *v5; // x20
  UnityEngine_Component_o *manager; // x0
  __int64 v7; // x10
  int klass_high; // w8
  const MethodInfo *v9; // x1
  __int64 *v10; // x8

  if ( (byte_42B1DB0 & 1) == 0 )
  {
    sub_B52984(&EventFortificationListViewItem_TypeInfo);
    sub_B52984(&EventFortificationListViewManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_10036/*"OnClickSelectObject"*/);
    sub_B52984(&StringLiteral_10037/*"OnClickSelectPush"*/);
    byte_42B1DB0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventFortificationListViewItem_TypeInfo )
        v5 = (EventFortificationListViewItem_o *)this->fields.linkItem;
      else
        v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      goto LABEL_38;
    v7 = *(&EventFortificationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != EventFortificationListViewManager_TypeInfo )
    {
      goto LABEL_38;
    }
    klass_high = HIDWORD(manager[21].klass);
    if ( klass_high == 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( v5 )
      {
        EventFortificationListViewItem__SwapChoice(v5, 0LL);
        goto LABEL_25;
      }
LABEL_38:
      sub_B52A5C(manager, method);
    }
    if ( klass_high == 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(11, 0LL);
      if ( v5 )
      {
        EventFortificationListViewItem__SwapLock(v5, 0LL);
LABEL_25:
        EventFortificationListViewObject__SetupDisp(this, v9);
        return;
      }
      goto LABEL_38;
    }
    if ( !v5 )
      goto LABEL_38;
    if ( klass_high == 3 )
    {
      if ( !EventFortificationListViewItem__get_IsCanNotSelectPush(v5, 0LL) )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        if ( !manager )
          goto LABEL_38;
        v10 = &StringLiteral_10037/*"OnClickSelectPush"*/;
        goto LABEL_37;
      }
    }
    else if ( !v5->fields.isCanNotSelect )
    {
      v10 = &StringLiteral_10036/*"OnClickSelectObject"*/;
LABEL_37:
      UnityEngine_Component__SendMessage(manager, (System_String_o *)*v10, (Il2CppObject *)this, 0LL);
      return;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall EventFortificationListViewObject__OnLongPush(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  EventFortificationListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  v2 = this;
  if ( (byte_42B1DB1 & 1) == 0 )
  {
    sub_B52984(&EventFortificationListViewItem_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_10087/*"OnLongPushListView"*/);
    this = (EventFortificationListViewObject_o *)sub_B52984(&StringLiteral_10105/*"OnPressCancel"*/);
    byte_42B1DB1 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventFortificationListViewItem_TypeInfo )
    {
      if ( BYTE3(linkItem[1].fields.sortValue2B) )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
      if ( !linkItem[1].monitor )
        return;
      this = (EventFortificationListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v2,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_41491048(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10105/*"OnPressCancel"*/,
          0LL);
        this = (EventFortificationListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10087/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
      }
    }
    sub_B52A5C(this, method);
  }
}


void __fastcall EventFortificationListViewObject__SetItem(
        EventFortificationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33992116((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventFortificationListViewObject__SetItem_28471732(
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
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  EventFortificationListViewItemDraw_o *v8; // x0

  if ( (byte_42B1DAE & 1) == 0 )
  {
    sub_B52984(&EventFortificationListViewItem_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1DAE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventFortificationListViewItem_TypeInfo )
    {
      v5 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v5 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_B52A5C(0LL, v7);
    EventFortificationListViewItemDraw__SetItem(
      v8,
      (EventFortificationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewObject__Start(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    EventFortificationListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall EventFortificationListViewObject__ToString(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  System_String_o *v6; // x21
  int32_t *v7; // x0
  __int64 v8; // x9
  float z; // w10
  System_String_o *v10; // x0
  __int64 v12; // [xsp+0h] [xbp-30h] BYREF
  float v13; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1DAF & 1) == 0 )
  {
    sub_B52984(&EventFortificationListViewItemDraw_DispMode_TypeInfo);
    sub_B52984(&StringLiteral_81/*" "*/);
    byte_42B1DAF = 1;
  }
  v13 = 0.0;
  v12 = 0LL;
  v3 = j_il2cpp_value_box_0(EventFortificationListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  v5 = v3;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(
                            v3,
                            *(_QWORD *)(*(_QWORD *)v3 + 368LL));
  v7 = (int32_t *)j_il2cpp_object_unbox_0(v5);
  v8 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v7;
  v12 = v8;
  v13 = z;
  v10 = UnityEngine_Vector3__ToString(v14, (const MethodInfo *)&v12);
  return System_String__Concat_44570600(v6, (System_String_o *)StringLiteral_81/*" "*/, v10, 0LL);
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

  if ( (byte_42B1DA9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B1DA9 = 1;
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
    v9 = sub_B4739C(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewObject_o *)sub_B52D50(v8);
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

  if ( (byte_42B1DAA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B1DAA = 1;
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
    v9 = sub_B4739C(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewObject_o *)sub_B52D50(v8);
  EventFortificationListViewObject__Awake(v11, v12);
}