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

  if ( (byte_4187D74 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthShortcutButtonListViewObject_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6031/*"EntryAnim"*/, v8);
    byte_4187D74 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6031/*"EntryAnim"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6031/*"EntryAnim"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_IN_ANIM_DURATION = 0.2;
  v11->static_fields->FRAME_OUT_ANIM_DURATION = 0.1;
}


void __fastcall BlankEarthShortcutButtonListViewObject___ctor(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187D73 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4187D73 = 1;
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct BlankEarthShortcutButtonListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187D6E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___, method);
    byte_4187D6E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                   dispObject,
                                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___);
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
  sub_B2C2F8(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__FrameIn(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  char *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  BlankEarthShortcutButtonListViewObject_c *v9; // x8
  float z; // w9
  UITweener_o *v11; // x20
  __int64 v12; // x8
  float v13; // w9
  EventDelegate_Callback_o *v14; // x21

  if ( (byte_4187D71 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__, method);
    sub_B2C35C(&BlankEarthShortcutButtonListViewObject_TypeInfo, v3);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v4);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_4187D71 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( (BYTE3(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v9 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_TweenWidth_(
                         v8,
                         v9->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !gameObject )
LABEL_9:
    sub_B2C434(gameObject, v7);
  z = this->fields.outPos.fields.z;
  v11 = (UITweener_o *)gameObject;
  *((_QWORD *)gameObject + 15) = *(_QWORD *)&this->fields.outPos.fields.x;
  *((float *)gameObject + 32) = z;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  v13 = this->fields.inPos.fields.z;
  *((_DWORD *)gameObject + 6) = 6;
  *(_QWORD *)(gameObject + 132) = v12;
  *((float *)gameObject + 35) = v13;
  v14 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__,
    0LL);
  UITweener__SetOnFinished(v11, v14, 0LL);
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
  float z; // w9
  UITweener_o *v11; // x20
  __int64 v12; // x8
  float v13; // w9
  EventDelegate_Callback_o *v14; // x21

  if ( (byte_4187D72 & 1) == 0 )
  {
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__, method);
    sub_B2C35C(&BlankEarthShortcutButtonListViewObject_TypeInfo, v3);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v4);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_4187D72 = 1;
  }
  v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( (BYTE3(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    v6->static_fields->FUNC_ENTRY_ANIM,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = UITweener__Begin_TweenWidth_(
         gameObject,
         BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_B2C434(0LL, v9);
  z = this->fields.inPos.fields.z;
  v11 = (UITweener_o *)v8;
  *(_QWORD *)&v8->fields.from = *(_QWORD *)&this->fields.inPos.fields.x;
  *(float *)&v8->fields.updateTable = z;
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  v13 = this->fields.outPos.fields.z;
  v8->fields.style = 2;
  *(_QWORD *)(&v8->fields.updateTable + 4) = v12;
  *((float *)&v8->fields.mWidget + 1) = v13;
  v14 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__,
    0LL);
  UITweener__SetOnFinished(v11, v14, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetEntryAnim(
        BlankEarthShortcutButtonListViewObject_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  BlankEarthShortcutButtonListViewObject_c *v14; // x0
  float slideInTimingDelayDivision; // s1
  float v16; // s0

  if ( (byte_4187D70 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthShortcutButtonListViewObject_TypeInfo, endAction);
    byte_4187D70 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.animEndAction = endAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animEndAction,
    (System_Int32_array **)endAction,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  BlankEarthShortcutButtonListViewObject__QuickFrameOut(this, v13);
  v14 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( (BYTE3(BlankEarthShortcutButtonListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v14 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  slideInTimingDelayDivision = this->fields.slideInTimingDelayDivision;
  v16 = 0.0;
  if ( slideInTimingDelayDivision > 0.0 )
    v16 = (float)-this->fields.inPos.fields.y / slideInTimingDelayDivision;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v14->static_fields->FUNC_ENTRY_ANIM, v16, 0LL);
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
  BlankEarthShortcutButtonListViewObject_o *v8; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_GameObject_o *parent; // x8
  UnityEngine_GameObject_o *v19; // x20

  if ( !item )
    goto LABEL_10;
  v8 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&item->fields.viewObject,
    (System_Int32_array **)this,
    (System_String_array **)seed,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.linkItem = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v8->fields.linkItem,
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v8,
                                                       0LL);
  if ( !seed )
    goto LABEL_10;
  v17 = (UnityEngine_Transform_o *)this;
  this = (BlankEarthShortcutButtonListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_10;
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
  if ( !v17 )
    goto LABEL_10;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)this, 0LL);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v8,
                                                       0LL);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0LL),
        (this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)v8,
                                                              0LL)) == 0LL)
    || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v8->fields.baseScale, 0LL),
        this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)v8,
                                                             0LL),
        (parent = seed->fields.parent) == 0LL)
    || (v19 = (UnityEngine_GameObject_o *)this,
        this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL),
        !v19) )
  {
LABEL_10:
    sub_B2C434(this, item);
  }
  UnityEngine_GameObject__set_layer(v19, (int32_t)this, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v8, 1, 0LL);
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewObject_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._9_SetInput.method)(
    v8,
    1LL,
    v8->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B2C434(0LL, isEnable);
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
  __int64 v8; // x1
  BlankEarthShortcutButtonListViewItemDraw_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187D6F & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthShortcutButtonListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187D6F = 1;
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
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_19;
    BlankEarthShortcutButtonListViewItemDraw__SetItem(transform, (BlankEarthShortcutButtonListViewItem_o *)v6, 0LL);
    if ( this->fields.listItemWidth > 0.0 )
      return;
    transform = this->fields.itemDraw;
    if ( !transform
      || (this->fields.listItemWidth = BlankEarthShortcutButtonListViewItemDraw__GetButtonWidth(transform, 0LL),
          (transform = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL)) == 0LL) )
    {
LABEL_19:
      sub_B2C434(transform, v8);
    }
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
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
  sub_B2C2F8(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B2C2F8(p_animEndAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0LL);
}