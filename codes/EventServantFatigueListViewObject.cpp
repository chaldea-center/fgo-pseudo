void __fastcall EventServantFatigueListViewObject___ctor(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC084 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC084 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventServantFatigueListViewObject__Awake(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventServantFatigueListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC07C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC07C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct EventServantFatigueListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              dispObject,
                                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
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


EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewObject__GetItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EC07D & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC07D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventServantFatigueListViewItem_TypeInfo )
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

  if ( (byte_42EC07E & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42EC07E = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  if ( linkItem )
  {
    v11 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
    {
      if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == EventServantFatigueListViewItem_TypeInfo )
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
      v14 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v14 )
      {
        v13 = 0;
        v12 = 0LL;
      }
      else
      {
        v13 = 0;
        if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == EventServantFatigueListViewItem_TypeInfo )
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
  ((void (__fastcall *)(EventServantFatigueListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
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
    v34 = dword_32B5030[v16];
    this->fields.dispMode = dword_32B5010[v16];
    this->fields.state = v34;
  }
  if ( (v19 & 1) != 0 || dispMode != this->fields.dispMode )
    EventServantFatigueListViewObject__SetupDisp(this, v27);
  klass = (System_Action_o *)p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0LL;
    sub_B5D560(p_CallbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
    System_Action__Invoke(klass, 0LL);
  }
}


void __fastcall EventServantFatigueListViewObject__InitItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_31561600(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventServantFatigueListViewObject__Init(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_31562280(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventServantFatigueListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Init_31578232(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventServantFatigueListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


void __fastcall EventServantFatigueListViewObject__OnClickSelect(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventServantFatigueListViewObject_o *v4; // x19
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
  EventServantFatigueListViewItem_o *v19; // x20
  EventServantFatigueListViewObject_o *manager; // x21
  __int64 v21; // x10
  int klass_high; // w8
  __int64 *v23; // x8

  v4 = this;
  if ( (byte_42EC082 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventServantFatigueListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10078/*"OnClickSelectObject"*/, v11, v12, v13);
    this = (EventServantFatigueListViewObject_o *)sub_B5D5C4(&StringLiteral_10079/*"OnClickSelectPush"*/, v14, v15, v16);
    byte_42EC082 = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v18 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
    {
      if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v18 - 1] == EventServantFatigueListViewItem_TypeInfo )
        v19 = (EventServantFatigueListViewItem_o *)v4->fields.linkItem;
      else
        v19 = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    manager = (EventServantFatigueListViewObject_o *)v4->fields.manager;
    if ( !manager )
      goto LABEL_40;
    v21 = *(&EventServantFatigueListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (EventServantFatigueListViewManager_c *)manager->klass->_2.typeHierarchy[v21 - 1] != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_40;
    }
    klass_high = HIDWORD(manager[4].klass);
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
        v19->fields.isSwapChoice ^= 1u;
        goto LABEL_25;
      }
LABEL_40:
      sub_B5D69C(this, method);
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
        v19->fields.isSwapLock ^= 1u;
LABEL_25:
        EventServantFatigueListViewObject__SetupDisp(v4, method);
        return;
      }
      goto LABEL_40;
    }
    if ( !v19 )
      goto LABEL_40;
    if ( klass_high == 3 )
    {
      if ( !EventServantFatigueListViewItem__get_IsCanNotSelectPush(v19, method) )
      {
        this = (EventServantFatigueListViewObject_o *)v4->fields.manager;
        if ( !this )
          goto LABEL_40;
        v23 = &StringLiteral_10079/*"OnClickSelectPush"*/;
        goto LABEL_33;
      }
    }
    else if ( EventServantFatigueListViewItem__get_IsBaseSvt(v19, method)
           || !v19->fields.isFatigueRecover && !v19->fields.isCanNotSelect )
    {
      v23 = &StringLiteral_10078/*"OnClickSelectObject"*/;
      this = manager;
LABEL_33:
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)*v23,
        (Il2CppObject *)v4,
        0LL);
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


void __fastcall EventServantFatigueListViewObject__OnLongPush(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventServantFatigueListViewObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v12; // x11

  v4 = this;
  if ( (byte_42EC083 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, v5, v6, v7);
    this = (EventServantFatigueListViewObject_o *)sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v8, v9, v10);
    byte_42EC083 = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != EventServantFatigueListViewItem_TypeInfo )
    {
      goto LABEL_11;
    }
    if ( linkItem[1].monitor )
    {
      this = (EventServantFatigueListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v4,
                                                      0LL);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_41595196(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
          0LL);
        this = (EventServantFatigueListViewObject_o *)v4->fields.manager;
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
LABEL_11:
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall EventServantFatigueListViewObject__SetItem(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventServantFatigueListViewObject__SetItem_31577380(
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
  EventServantFatigueListViewItemDraw_o *v14; // x0

  if ( (byte_42EC07F & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC07F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == EventServantFatigueListViewItem_TypeInfo )
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
    EventServantFatigueListViewItemDraw__SetItem(
      v14,
      (EventServantFatigueListViewItem_o *)linkItem,
      this->fields.dispMode,
      v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewObject__Start(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    EventServantFatigueListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall EventServantFatigueListViewObject__ToString(
        EventServantFatigueListViewObject_o *this,
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

  if ( (byte_42EC081 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItemDraw_DispMode_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    byte_42EC081 = 1;
  }
  v18 = 0.0;
  v17 = 0LL;
  v8 = j_il2cpp_value_box_0(EventServantFatigueListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
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


void __fastcall EventServantFatigueListViewObject__UpdateDisp(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  struct ListViewItem_o *v10; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  EventServantFatigueListViewItemDraw_o *v14; // x0

  if ( (byte_42EC080 & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC080 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v9 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == EventServantFatigueListViewItem_TypeInfo )
      v10 = this->fields.linkItem;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
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
    EventServantFatigueListViewItemDraw__SetFatigueMask(v14, (EventServantFatigueListViewItem_o *)v10, v13);
  }
}


void __fastcall EventServantFatigueListViewObject__add_CallbackFunc(
        EventServantFatigueListViewObject_o *this,
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
  EventServantFatigueListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC07A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC07A = 1;
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
  sub_B5D990(v9);
  EventServantFatigueListViewObject__remove_CallbackFunc(v12, v13, v14);
}


void __fastcall EventServantFatigueListViewObject__remove_CallbackFunc(
        EventServantFatigueListViewObject_o *this,
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
  EventServantFatigueListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC07B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC07B = 1;
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
  sub_B5D990(v9);
  EventServantFatigueListViewObject__Awake(v12, v13);
}