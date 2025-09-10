void BlankEarthShortcutButtonListViewObject___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C23B6A & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_1C2D490(&StringLiteral_6076/*"EntryAnim"*/);
    byte_4C23B6A = 1;
  }
  BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6076/*"EntryAnim"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields,
    StringLiteral_6076/*"EntryAnim"*/,
    v1,
    v2);
  *(_QWORD *)&BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_IN_ANIM_DURATION = 0x3DCCCCCD3E4CCCCDLL;
}


void BlankEarthShortcutButtonListViewObject___ctor(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C23B69 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C23B69 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void BlankEarthShortcutButtonListViewObject__Awake(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C23B64 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___);
    byte_4C23B64 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___);
  this->fields.itemDraw = (struct BlankEarthShortcutButtonListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


// attributes: thunk
void BlankEarthShortcutButtonListViewObject__EntryAnim(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewObject__FrameIn(this, method);
}


void BlankEarthShortcutButtonListViewObject__ExecAnimEndAction(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (CGThumbnailListItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1C2D434(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0);
}


void BlankEarthShortcutButtonListViewObject__FrameIn(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  BlankEarthShortcutButtonListViewObject_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  float z; // w8
  __int64 v9; // x9
  UITweener_o *v10; // x20
  EventDelegate_Callback_o *v11; // x21
  __int64 v12; // [xsp+0h] [xbp-40h]

  if ( (byte_4C23B67 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__);
    sub_1C2D490(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    byte_4C23B67 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  v7 = v5;
  if ( !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v7,
                         v6->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
  v12 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
LABEL_8:
    sub_1C2D6EC(gameObject, v4);
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v12;
  z = this->fields.inPos.fields.z;
  v9 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v9;
  v10 = (UITweener_o *)gameObject;
  v11 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__,
    0);
  UITweener__SetOnFinished(v10, v11, 0);
}


void BlankEarthShortcutButtonListViewObject__FrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewObject_c *v3; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  float z; // w8
  void *v8; // x9
  UITweener_o *v9; // x20
  EventDelegate_Callback_o *v10; // x21
  Il2CppClass *v11; // [xsp+0h] [xbp-30h]

  if ( (byte_4C23B68 & 1) == 0 )
  {
    sub_1C2D490(&Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__);
    sub_1C2D490(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    byte_4C23B68 = 1;
  }
  v3 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v3 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71148584(
    (UnityEngine_MonoBehaviour_o *)this,
    v3->static_fields->FUNC_ENTRY_ANIM,
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = UITweener__Begin_object_(
         gameObject,
         BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
  v11 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  if ( !v5 )
    sub_1C2D6EC(0, v6);
  *(float *)&v5[8].monitor = this->fields.inPos.fields.z;
  v5[8].klass = v11;
  z = this->fields.outPos.fields.z;
  v8 = *(void **)&this->fields.outPos.fields.x;
  LODWORD(v5[2].klass) = 2;
  *((float *)&v5[9].klass + 1) = z;
  *(void **)((char *)&v5[8].monitor + 4) = v8;
  v9 = (UITweener_o *)v5;
  v10 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__,
    0);
  UITweener__SetOnFinished(v9, v10, 0);
}


void BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C2D6EC(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0);
}


void BlankEarthShortcutButtonListViewObject__SetEntryAnim(
        BlankEarthShortcutButtonListViewObject_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  BlankEarthShortcutButtonListViewObject_c *v10; // x0
  float slideInTimingDelayDivision; // s1
  float v12; // s0

  if ( (byte_4C23B66 & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    byte_4C23B66 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.animEndAction = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animEndAction, (int32_t)endAction, v7, v8);
  BlankEarthShortcutButtonListViewObject__QuickFrameOut(this, v9);
  v10 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v10 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  slideInTimingDelayDivision = this->fields.slideInTimingDelayDivision;
  v12 = 0.0;
  if ( slideInTimingDelayDivision > 0.0 )
    v12 = (float)-this->fields.inPos.fields.y / slideInTimingDelayDivision;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v10->static_fields->FUNC_ENTRY_ANIM, v12, 0);
}


void BlankEarthShortcutButtonListViewObject__SetItem(
        BlankEarthShortcutButtonListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewObject_o *v4; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BlankEarthShortcutButtonListViewObject_o *v9; // x22
  UnityEngine_GameObject_o *parent; // x8
  BlankEarthShortcutButtonListViewObject_o *v11; // x20

  if ( !item )
    goto LABEL_10;
  v4 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_1C2D434((CGThumbnailListItem_o *)&item->fields.viewObject, (int32_t)this, (int32_t)seed, method);
  v4->fields.linkItem = item;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.linkItem, (int32_t)item, v7, v8);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v4,
                                                       0);
  if ( !seed )
    goto LABEL_10;
  v9 = this;
  this = (BlankEarthShortcutButtonListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_10;
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
  if ( !v9 )
    goto LABEL_10;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v4,
                                                       0);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0),
        (this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)v4,
                                                              0)) == 0)
    || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v4->fields.baseScale, 0),
        this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)v4,
                                                             0),
        (parent = seed->fields.parent) == 0)
    || (v11 = this, this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0),
                    !v11) )
  {
LABEL_10:
    sub_1C2D6EC(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v11, (int32_t)this, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v4, 1, 0);
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewObject_o *, __int64, const MethodInfo *))v4->klass->vtable._9_SetInput.methodPtr)(
    v4,
    1,
    v4->klass->vtable._9_SetInput.method);
}


void BlankEarthShortcutButtonListViewObject__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C2D6EC(0, isEnable);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(itemDraw, isEnable, method);
}


void BlankEarthShortcutButtonListViewObject__SetupDisp(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  BlankEarthShortcutButtonListViewItemDraw_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23B65 & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthShortcutButtonListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B65 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = BlankEarthShortcutButtonListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (BlankEarthShortcutButtonListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == BlankEarthShortcutButtonListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_18;
    BlankEarthShortcutButtonListViewItemDraw__SetItem(transform, (BlankEarthShortcutButtonListViewItem_o *)v5, v8);
    if ( this->fields.listItemWidth > 0.0 )
      return;
    transform = this->fields.itemDraw;
    if ( !transform
      || (this->fields.listItemWidth = BlankEarthShortcutButtonListViewItemDraw__GetButtonWidth(transform, v7),
          (transform = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0)) == 0) )
    {
LABEL_18:
      sub_1C2D6EC(transform, v7);
    }
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
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


void BlankEarthShortcutButtonListViewObject___FrameIn_b__15_0(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (CGThumbnailListItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1C2D434(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0);
}


void BlankEarthShortcutButtonListViewObject___FrameOut_b__16_0(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (CGThumbnailListItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_1C2D434(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0);
}