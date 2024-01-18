void __fastcall EventServantFatigueListViewObject___ctor(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A9C0 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418A9C0 = 1;
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventServantFatigueListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A9B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___, method);
    byte_418A9B8 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct EventServantFatigueListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              dispObject,
                                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


EventServantFatigueListViewItem_o *__fastcall EventServantFatigueListViewObject__GetItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_418A9B9 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, method);
    byte_418A9B9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == EventServantFatigueListViewItem_TypeInfo )
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

  if ( (byte_418A9BA & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_418A9BA = 1;
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
    sub_B2C434(transform, v18);
  }
  v19 = v15 | v13;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (BattleServantConfConponent_o *)&this->fields.CallbackFunc;
  sub_B2C2F8(
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
    v34 = dword_31B3AF0[v16];
    this->fields.dispMode = dword_31B3AD0[v16];
    this->fields.state = v34;
  }
  if ( (v19 & 1) != 0 || dispMode != this->fields.dispMode )
    EventServantFatigueListViewObject__SetupDisp(this, v27);
  klass = (System_Action_o *)p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0LL;
    sub_B2C2F8(p_CallbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
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
void __fastcall EventServantFatigueListViewObject__Init_30488460(
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
void __fastcall EventServantFatigueListViewObject__Init_30489140(
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
void __fastcall EventServantFatigueListViewObject__Init_30505092(
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
  EventServantFatigueListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  EventServantFatigueListViewItem_o *v9; // x20
  EventServantFatigueListViewObject_o *manager; // x21
  __int64 v11; // x10
  int klass_high; // w8
  __int64 *v13; // x8

  v2 = this;
  if ( (byte_418A9BE & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, method);
    sub_B2C35C(&EventServantFatigueListViewManager_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_9972/*"OnClickSelectObject"*/, v5);
    this = (EventServantFatigueListViewObject_o *)sub_B2C35C(&StringLiteral_9973/*"OnClickSelectPush"*/, v6);
    byte_418A9BE = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v8 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
    {
      if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == EventServantFatigueListViewItem_TypeInfo )
        v9 = (EventServantFatigueListViewItem_o *)v2->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    manager = (EventServantFatigueListViewObject_o *)v2->fields.manager;
    if ( !manager )
      goto LABEL_40;
    v11 = *(&EventServantFatigueListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (EventServantFatigueListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != EventServantFatigueListViewManager_TypeInfo )
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
      if ( v9 )
      {
        v9->fields.isSwapChoice ^= 1u;
        goto LABEL_25;
      }
LABEL_40:
      sub_B2C434(this, method);
    }
    if ( klass_high == 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(11, 0LL);
      if ( v9 )
      {
        v9->fields.isSwapLock ^= 1u;
LABEL_25:
        EventServantFatigueListViewObject__SetupDisp(v2, method);
        return;
      }
      goto LABEL_40;
    }
    if ( !v9 )
      goto LABEL_40;
    if ( klass_high == 3 )
    {
      if ( !EventServantFatigueListViewItem__get_IsCanNotSelectPush(v9, method) )
      {
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( !this )
          goto LABEL_40;
        v13 = &StringLiteral_9973/*"OnClickSelectPush"*/;
        goto LABEL_33;
      }
    }
    else if ( EventServantFatigueListViewItem__get_IsBaseSvt(v9, method)
           || !v9->fields.isFatigueRecover && !v9->fields.isCanNotSelect )
    {
      v13 = &StringLiteral_9972/*"OnClickSelectObject"*/;
      this = manager;
LABEL_33:
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)*v13,
        (Il2CppObject *)v2,
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
  EventServantFatigueListViewObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  v2 = this;
  if ( (byte_418A9BF & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10023/*"OnLongPushListView"*/, v3);
    this = (EventServantFatigueListViewObject_o *)sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v4);
    byte_418A9BF = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != EventServantFatigueListViewItem_TypeInfo )
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
        UnityEngine_GameObject__SendMessage_40660564(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
          0LL);
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10023/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0LL);
          return;
        }
      }
LABEL_11:
      sub_B2C434(this, method);
    }
  }
}


void __fastcall EventServantFatigueListViewObject__SetItem(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventServantFatigueListViewObject__SetItem_30504240(
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
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  EventServantFatigueListViewItemDraw_o *v10; // x0

  if ( (byte_418A9BB & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A9BB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == EventServantFatigueListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    EventServantFatigueListViewItemDraw__SetItem(
      v10,
      (EventServantFatigueListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
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
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  System_String_o *v7; // x21
  int32_t *v8; // x0
  __int64 v9; // x9
  float z; // w10
  System_String_o *v11; // x0
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF
  float v14; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A9BD & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItemDraw_DispMode_TypeInfo, method);
    sub_B2C35C(&StringLiteral_80/*" "*/, v3);
    byte_418A9BD = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(EventServantFatigueListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v8 = (int32_t *)j_il2cpp_object_unbox_0(v6);
  v9 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v8;
  v13 = v9;
  v14 = z;
  v11 = UnityEngine_Vector3__ToString(v15, (const MethodInfo *)&v13);
  return System_String__Concat_44307816(v7, (System_String_o *)StringLiteral_80/*" "*/, v11, 0LL);
}


void __fastcall EventServantFatigueListViewObject__UpdateDisp(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  EventServantFatigueListViewItemDraw_o *v10; // x0

  if ( (byte_418A9BC & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A9BC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v5 = *(&EventServantFatigueListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == EventServantFatigueListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    EventServantFatigueListViewItemDraw__SetFatigueMask(v10, (EventServantFatigueListViewItem_o *)v6, v9);
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

  if ( (byte_418A9B6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A9B6 = 1;
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
    v9 = sub_B20D74(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A9B7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A9B7 = 1;
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
    v9 = sub_B20D74(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  EventServantFatigueListViewObject__Awake(v11, v12);
}