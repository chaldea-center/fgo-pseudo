void BlankEarthShortcutButtonListViewObject___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596CE3A & 1) == 0 )
  {
    sub_2213A60(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_6342/*"EntryAnim"*/);
    byte_596CE3A = 1;
  }
  v7 = StringLiteral_6342/*"EntryAnim"*/;
  BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6342/*"EntryAnim"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_QWORD *)&BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_IN_ANIM_DURATION = 0x3DCCCCCD3E4CCCCDLL;
}


void BlankEarthShortcutButtonListViewObject___ctor(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CE39 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596CE39 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void BlankEarthShortcutButtonListViewObject__Awake(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CE34 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___);
    byte_596CE34 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___);
  this->fields.itemDraw = (struct BlankEarthShortcutButtonListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_2213A04(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}


void BlankEarthShortcutButtonListViewObject__FrameIn(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BlankEarthShortcutButtonListViewObject_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  void *v10; // x9
  UnityEngine_GameObject_o *v11; // x20
  intptr_t v12; // x10
  EventDelegate_Callback_c *v13; // x0
  EventDelegate_Callback_o *v14; // x21

  if ( (byte_596CE37 & 1) == 0 )
  {
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__);
    sub_2213A60(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596CE37 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  v9 = v5;
  if ( !*(&BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo, v6, v7);
    v8 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UITweener__Begin_object_(
                                             v9,
                                             v8->static_fields->FRAME_IN_ANIM_DURATION,
                                             (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !gameObject )
LABEL_8:
    sub_2213CDC(gameObject, v4);
  v10 = *(void **)&this->fields.outPos.fields.x;
  v11 = gameObject;
  *(float *)&gameObject[5].fields.m_CachedPtr = this->fields.outPos.fields.z;
  gameObject[5].monitor = v10;
  v12 = *(_QWORD *)&this->fields.inPos.fields.x;
  HIDWORD(gameObject[6].klass) = LODWORD(this->fields.inPos.fields.z);
  v13 = EventDelegate_Callback_TypeInfo;
  *(intptr_t *)((char *)&v11[5].fields.m_CachedPtr + 4) = v12;
  LODWORD(v11[1].monitor) = 6;
  v14 = (EventDelegate_Callback_o *)sub_2213CCC(v13);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__,
    0);
  UITweener__SetOnFinished((UITweener_o *)v11, v14, 0);
}


void BlankEarthShortcutButtonListViewObject__FrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarthShortcutButtonListViewObject_c *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppClass *v8; // x9
  Il2CppObject *v9; // x20
  void *v10; // x10
  EventDelegate_Callback_c *v11; // x0
  EventDelegate_Callback_o *v12; // x21

  if ( (byte_596CE38 & 1) == 0 )
  {
    sub_2213A60(&Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__);
    sub_2213A60(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    byte_596CE38 = 1;
  }
  v4 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( !*(&BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo, method, v2);
    v4 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83442996(
    (UnityEngine_MonoBehaviour_o *)this,
    v4->static_fields->FUNC_ENTRY_ANIM,
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = UITweener__Begin_object_(
         gameObject,
         BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v6 )
    sub_2213CDC(0, v7);
  v8 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  v9 = v6;
  *(float *)&v6[8].monitor = this->fields.inPos.fields.z;
  v6[8].klass = v8;
  v10 = *(void **)&this->fields.outPos.fields.x;
  HIDWORD(v6[9].klass) = LODWORD(this->fields.outPos.fields.z);
  v11 = EventDelegate_Callback_TypeInfo;
  *(void **)((char *)&v9[8].monitor + 4) = v10;
  LODWORD(v9[2].klass) = 2;
  v12 = (EventDelegate_Callback_o *)sub_2213CCC(v11);
  EventDelegate_Callback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__,
    0);
  UITweener__SetOnFinished((UITweener_o *)v9, v12, 0);
}


void BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0);
}


void BlankEarthShortcutButtonListViewObject__SetEntryAnim(
        BlankEarthShortcutButtonListViewObject_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  BlankEarthShortcutButtonListViewObject_c *v16; // x0
  float slideInTimingDelayDivision; // s1
  float v18; // s0

  if ( (byte_596CE36 & 1) == 0 )
  {
    sub_2213A60(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    byte_596CE36 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.animEndAction = endAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction,
    (int32_t)endAction,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  BlankEarthShortcutButtonListViewObject__QuickFrameOut(this, v13);
  v16 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( !*(&BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo, v14, v15);
    v16 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  slideInTimingDelayDivision = this->fields.slideInTimingDelayDivision;
  v18 = 0.0;
  if ( slideInTimingDelayDivision > 0.0 )
    v18 = (float)-this->fields.inPos.fields.y / slideInTimingDelayDivision;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v16->static_fields->FUNC_ENTRY_ANIM, v18, 0);
}


void BlankEarthShortcutButtonListViewObject__SetItem(
        BlankEarthShortcutButtonListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BlankEarthShortcutButtonListViewObject_o *v8; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BlankEarthShortcutButtonListViewObject_o *v17; // x22
  UnityEngine_GameObject_o *parent; // x8
  BlankEarthShortcutButtonListViewObject_o *v19; // x20

  if ( !item )
    goto LABEL_10;
  v8 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.viewObject,
    (int32_t)this,
    (System_String_o *)seed,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.linkItem = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v8,
                                                       0);
  if ( !seed )
    goto LABEL_10;
  v17 = this;
  this = (BlankEarthShortcutButtonListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_10;
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
  if ( !v17 )
    goto LABEL_10;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v8,
                                                       0);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0),
        (this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)v8,
                                                              0)) == 0)
    || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v8->fields.baseScale, 0),
        this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)v8,
                                                             0),
        (parent = seed->fields.parent) == 0)
    || (v19 = this, this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0),
                    !v19) )
  {
LABEL_10:
    sub_2213CDC(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v19, (int32_t)this, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v8, 1, 0);
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewObject_o *, __int64, const MethodInfo *))v8->klass->vtable._9_SetInput.methodPtr)(
    v8,
    1,
    v8->klass->vtable._9_SetInput.method);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthShortcutButtonListViewObject__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, isEnable);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(itemDraw, isEnable, method);
}


void BlankEarthShortcutButtonListViewObject__SetupDisp(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  BlankEarthShortcutButtonListViewItemDraw_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CE35 & 1) == 0 )
  {
    sub_2213A60(&BlankEarthShortcutButtonListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE35 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_18;
    BlankEarthShortcutButtonListViewItemDraw__SetItem(transform, (BlankEarthShortcutButtonListViewItem_o *)v5, v10);
    if ( this->fields.listItemWidth > 0.0 )
      return;
    transform = this->fields.itemDraw;
    if ( !transform
      || (this->fields.listItemWidth = BlankEarthShortcutButtonListViewItemDraw__GetButtonWidth(transform, v9),
          (transform = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0)) == 0) )
    {
LABEL_18:
      sub_2213CDC(transform, v9);
    }
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.x = this->fields.listItemWidth;
    localPosition.fields.z = this->fields.frameOutPositionMultiple;
    this->fields.inPos.fields.x = 0.0;
    this->fields.inPos.fields.z = 0.0;
    this->fields.inPos.fields.y = localPosition.fields.y;
    this->fields.outPos.fields.z = 0.0;
    this->fields.outPos.fields.x = (float)(localPosition.fields.x * localPosition.fields.z) + 0.0;
    this->fields.outPos.fields.y = localPosition.fields.y + 0.0;
  }
}


void BlankEarthShortcutButtonListViewObject___FrameIn_b__15_0(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_2213A04(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}


void BlankEarthShortcutButtonListViewObject___FrameOut_b__16_0(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0;
  sub_2213A04(p_animEndAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndAction, 0);
}