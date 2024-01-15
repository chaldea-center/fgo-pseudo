void __fastcall BlankEarthShortcutButtonListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1
  BlankEarthShortcutButtonListViewObject_c *v11; // x8

  if ( (byte_40FB0A3 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthShortcutButtonListViewObject_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_6013/*"EntryAnim"*/, v8);
    byte_40FB0A3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6013/*"EntryAnim"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6013/*"EntryAnim"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_IN_ANIM_DURATION = 0.2;
  v11->static_fields->FRAME_OUT_ANIM_DURATION = 0.1;
}


void __fastcall BlankEarthShortcutButtonListViewObject___ctor(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB0A2 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FB0A2 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__Awake(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct BlankEarthShortcutButtonListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FB09D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___, method);
    byte_40FB09D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                   dispObject,
                                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// attributes: thunk
void __fastcall BlankEarthShortcutButtonListViewObject__EntryAnim(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewObject__FrameIn(this, method);
}


void __fastcall BlankEarthShortcutButtonListViewObject__ExecAnimEndAction(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (BattleServantConfConponent_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_B16F98(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__FrameIn(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x20
  BlankEarthShortcutButtonListViewObject_c *v8; // x8
  TweenWidth_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  float z; // w9
  UITweener_o *v15; // x20
  __int64 v16; // x8
  float v17; // w9
  EventDelegate_Callback_o *v18; // x21

  if ( (byte_40FB0A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__, method);
    sub_B16FFC(&BlankEarthShortcutButtonListViewObject_TypeInfo, v3);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v4);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_40FB0A0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( (BYTE3(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v8 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         v7,
         v8->static_fields->FRAME_IN_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
LABEL_9:
    sub_B170D4();
  z = this->fields.outPos.fields.z;
  v15 = (UITweener_o *)v9;
  *(_QWORD *)&v9->fields.from = *(_QWORD *)&this->fields.outPos.fields.x;
  *(float *)&v9->fields.updateTable = z;
  v16 = *(_QWORD *)&this->fields.inPos.fields.x;
  v17 = this->fields.inPos.fields.z;
  v9->fields.style = 6;
  *(_QWORD *)(&v9->fields.updateTable + 4) = v16;
  *((float *)&v9->fields.mWidget + 1) = v17;
  v18 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v10, v11, v12, v13);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__,
    0LL);
  UITweener__SetOnFinished(v15, v18, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__FrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BlankEarthShortcutButtonListViewObject_c *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenWidth_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  float z; // w9
  UITweener_o *v14; // x20
  __int64 v15; // x8
  float v16; // w9
  EventDelegate_Callback_o *v17; // x21

  if ( (byte_40FB0A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__, method);
    sub_B16FFC(&BlankEarthShortcutButtonListViewObject_TypeInfo, v3);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v4);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_40FB0A1 = 1;
  }
  v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( (BYTE3(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    v6->static_fields->FUNC_ENTRY_ANIM,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_B170D4();
  z = this->fields.inPos.fields.z;
  v14 = (UITweener_o *)v8;
  *(_QWORD *)&v8->fields.from = *(_QWORD *)&this->fields.inPos.fields.x;
  *(float *)&v8->fields.updateTable = z;
  v15 = *(_QWORD *)&this->fields.outPos.fields.x;
  v16 = this->fields.outPos.fields.z;
  v8->fields.style = 2;
  *(_QWORD *)(&v8->fields.updateTable + 4) = v15;
  *((float *)&v8->fields.mWidget + 1) = v16;
  v17 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v9, v10, v11, v12);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__,
    0LL);
  UITweener__SetOnFinished(v14, v17, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetEntryAnim(
        BlankEarthShortcutButtonListViewObject_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  BlankEarthShortcutButtonListViewObject_c *v13; // x0
  float slideInTimingDelayDivision; // s1
  float v15; // s0

  if ( (byte_40FB09F & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthShortcutButtonListViewObject_TypeInfo, endAction);
    byte_40FB09F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.animEndAction = endAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animEndAction,
    (System_Int32_array **)endAction,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BlankEarthShortcutButtonListViewObject__QuickFrameOut(this, v12);
  v13 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( (BYTE3(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v13 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  slideInTimingDelayDivision = this->fields.slideInTimingDelayDivision;
  v15 = 0.0;
  if ( slideInTimingDelayDivision > 0.0 )
    v15 = (float)-this->fields.inPos.fields.y / slideInTimingDelayDivision;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13->static_fields->FUNC_ENTRY_ANIM, v15, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetItem(
        BlankEarthShortcutButtonListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_GameObject_o *parent; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x20
  int32_t layer; // w0

  if ( !item )
    goto LABEL_10;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&item->fields.viewObject,
    (System_Int32_array **)this,
    (System_String_array **)seed,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.linkItem = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !seed )
    goto LABEL_10;
  v18 = transform;
  parent = seed->fields.parent;
  if ( !parent )
    goto LABEL_10;
  v20 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v18 )
    goto LABEL_10;
  UnityEngine_Transform__set_parent(v18, v20, 0LL);
  v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v21
    || (UnityEngine_Transform__set_localPosition(v21, item->fields.basePosition, 0LL),
        (v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_Transform__set_localScale(v22, this->fields.baseScale, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (v24 = seed->fields.parent) == 0LL)
    || (v25 = gameObject, layer = UnityEngine_GameObject__get_layer(v24, 0LL), !v25) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__set_layer(v25, layer, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewObject_o *, __int64, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    1LL,
    this->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B170D4();
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(itemDraw, isEnable, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetupDisp(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  BlankEarthShortcutButtonListViewItemDraw_o *v8; // x0
  BlankEarthShortcutButtonListViewItemDraw_o *v9; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB09E & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthShortcutButtonListViewItem_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB09E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v5 = *(&BlankEarthShortcutButtonListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (BlankEarthShortcutButtonListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == BlankEarthShortcutButtonListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v6 != 0LL, 0LL);
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
      goto LABEL_19;
    BlankEarthShortcutButtonListViewItemDraw__SetItem(v8, (BlankEarthShortcutButtonListViewItem_o *)v6, 0LL);
    if ( this->fields.listItemWidth > 0.0 )
      return;
    v9 = this->fields.itemDraw;
    if ( !v9
      || (this->fields.listItemWidth = BlankEarthShortcutButtonListViewItemDraw__GetButtonWidth(v9, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
LABEL_19:
      sub_B170D4();
    }
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    localPosition.fields.x = this->fields.listItemWidth;
    localPosition.fields.z = this->fields.frameOutPositionMultiple;
    this->fields.inPos.fields.y = localPosition.fields.y;
    this->fields.inPos.fields.x = 0.0;
    this->fields.inPos.fields.z = 0.0;
    this->fields.outPos.fields.x = (float)(localPosition.fields.x * localPosition.fields.z) + 0.0;
    this->fields.outPos.fields.y = localPosition.fields.y + 0.0;
    this->fields.outPos.fields.z = 0.0;
  }
}


void __fastcall BlankEarthShortcutButtonListViewObject___FrameIn_b__15_0(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (BattleServantConfConponent_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_B16F98(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject___FrameOut_b__16_0(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (BattleServantConfConponent_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_B16F98(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}