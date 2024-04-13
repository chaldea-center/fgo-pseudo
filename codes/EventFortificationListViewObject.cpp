void __fastcall EventFortificationListViewObject___ctor(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9F3E & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F3E = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventFortificationListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9F37 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9F37 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct EventFortificationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___);
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


EventFortificationListViewItem_o *__fastcall EventFortificationListViewObject__GetItem(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E9F38 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F38 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventFortificationListViewItem_TypeInfo )
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

  if ( (byte_42E9F39 & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42E9F39 = 1;
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
    sub_B5D69C(transform, v18);
  }
  v19 = v15 | v13;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (BattleServantConfConponent_o *)&this->fields.CallbackFunc;
  sub_B5D560(
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
    v34 = dword_32A4670[v16];
    this->fields.dispMode = dword_32A4650[v16];
    this->fields.state = v34;
  }
  if ( (v19 & 1) != 0 || dispMode != this->fields.dispMode )
    EventFortificationListViewObject__SetupDisp(this, v27);
  klass = (System_Action_o *)p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0LL;
    sub_B5D560(p_CallbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
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
void __fastcall EventFortificationListViewObject__Init_27776840(
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
void __fastcall EventFortificationListViewObject__Init_27777520(
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
void __fastcall EventFortificationListViewObject__Init_27791604(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v18; // x11
  EventFortificationListViewItem_o *v19; // x20
  UnityEngine_Component_o *manager; // x0
  __int64 v21; // x10
  int klass_high; // w8
  const MethodInfo *v23; // x1
  __int64 *v24; // x8

  if ( (byte_42E9F3C & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventFortificationListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10078/*"OnClickSelectObject"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10079/*"OnClickSelectPush"*/, v14, v15, v16);
    byte_42E9F3C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v18 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
    {
      if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v18 - 1] == EventFortificationListViewItem_TypeInfo )
        v19 = (EventFortificationListViewItem_o *)this->fields.linkItem;
      else
        v19 = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      goto LABEL_38;
    v21 = *(&EventFortificationListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v21 - 1] != EventFortificationListViewManager_TypeInfo )
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
      if ( v19 )
      {
        EventFortificationListViewItem__SwapChoice(v19, 0LL);
        goto LABEL_25;
      }
LABEL_38:
      sub_B5D69C(manager, method);
    }
    if ( klass_high == 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(11, 0LL);
      if ( v19 )
      {
        EventFortificationListViewItem__SwapLock(v19, 0LL);
LABEL_25:
        EventFortificationListViewObject__SetupDisp(this, v23);
        return;
      }
      goto LABEL_38;
    }
    if ( !v19 )
      goto LABEL_38;
    if ( klass_high == 3 )
    {
      if ( !EventFortificationListViewItem__get_IsCanNotSelectPush(v19, 0LL) )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        if ( !manager )
          goto LABEL_38;
        v24 = &StringLiteral_10079/*"OnClickSelectPush"*/;
        goto LABEL_37;
      }
    }
    else if ( !v19->fields.isCanNotSelect )
    {
      v24 = &StringLiteral_10078/*"OnClickSelectObject"*/;
LABEL_37:
      UnityEngine_Component__SendMessage(manager, (System_String_o *)*v24, (Il2CppObject *)this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  EventFortificationListViewObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v15; // x11

  v4 = this;
  if ( (byte_42E9F3D & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, v8, v9, v10);
    this = (EventFortificationListViewObject_o *)sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v11, v12, v13);
    byte_42E9F3D = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v15 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v15
      && (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v15 - 1] == EventFortificationListViewItem_TypeInfo )
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
                                                     (UnityEngine_Component_o *)v4,
                                                     0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_41595196(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
          0LL);
        this = (EventFortificationListViewObject_o *)v4->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10129/*"OnLongPushListView"*/,
            (Il2CppObject *)v4,
            0LL);
          return;
        }
      }
    }
    sub_B5D69C(this, method);
  }
}


void __fastcall EventFortificationListViewObject__SetItem(
        EventFortificationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventFortificationListViewObject__SetItem_27790752(
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
  EventFortificationListViewItemDraw_o *v14; // x0

  if ( (byte_42E9F3A & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9F3A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&EventFortificationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == EventFortificationListViewItem_TypeInfo )
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
    EventFortificationListViewItemDraw__SetItem(
      v14,
      (EventFortificationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_o *v11; // x21
  int32_t *v12; // x0
  __int64 v13; // x9
  float z; // w10
  System_String_o *v15; // x0
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  float v18; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9F3B & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewItemDraw_DispMode_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    byte_42E9F3B = 1;
  }
  v18 = 0.0;
  v17 = 0LL;
  v8 = j_il2cpp_value_box_0(EventFortificationListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v10 = v8;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v12 = (int32_t *)j_il2cpp_object_unbox_0(v10);
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v12;
  v17 = v13;
  v18 = z;
  v15 = UnityEngine_Vector3__ToString(v19, (const MethodInfo *)&v17);
  return System_String__Concat_44580072(v11, (System_String_o *)StringLiteral_81/*" "*/, v15, 0LL);
}


void __fastcall EventFortificationListViewObject__add_CallbackFunc(
        EventFortificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventFortificationListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E9F35 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9F35 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v7 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CallbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventFortificationListViewObject_o *)sub_B5D990(v9);
  EventFortificationListViewObject__remove_CallbackFunc(v12, v13, v14);
}


void __fastcall EventFortificationListViewObject__remove_CallbackFunc(
        EventFortificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventFortificationListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E9F36 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9F36 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v7 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CallbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventFortificationListViewObject_o *)sub_B5D990(v9);
  EventFortificationListViewObject__Awake(v12, v13);
}