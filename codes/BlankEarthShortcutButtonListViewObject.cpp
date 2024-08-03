void __fastcall BlankEarthShortcutButtonListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F8FE7 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthShortcutButtonListViewObject_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_6019/*"EntryAnim"*/, v4);
    byte_49F8FE7 = 1;
  }
  BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FUNC_ENTRY_ANIM = (struct System_String_o *)StringLiteral_6019/*"EntryAnim"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields,
    StringLiteral_6019/*"EntryAnim"*/,
    v2,
    v3);
  *(_QWORD *)&BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_IN_ANIM_DURATION = 0x3DCCCCCD3E4CCCCDLL;
}


void __fastcall BlankEarthShortcutButtonListViewObject___ctor(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F8FE6 & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49F8FE6 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__Awake(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F8FE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___, method);
    byte_49F8FE1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewItemDraw___);
  this->fields.itemDraw = (struct BlankEarthShortcutButtonListViewItemDraw_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
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
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (ServantStatusBattleListViewItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1B6406C(p_animEndAction, 0, v2, v3);
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
  UnityEngine_GameObject_o *v7; // x0
  BlankEarthShortcutButtonListViewObject_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  float z; // w8
  __int64 v13; // x9
  UITweener_o *v14; // x20
  EventDelegate_Callback_o *v15; // x21
  __int64 v16; // [xsp+0h] [xbp-40h]

  if ( (byte_49F8FE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__, method);
    sub_1B640C8(&BlankEarthShortcutButtonListViewObject_TypeInfo, v3);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v4);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_49F8FE4 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  v9 = v7;
  if ( !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v8 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  gameObject = (char *)UITweener__Begin_object_(
                         v9,
                         v8->static_fields->FRAME_IN_ANIM_DURATION,
                         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v16 = *(_QWORD *)&this->fields.outPos.fields.x;
  if ( !gameObject )
LABEL_8:
    sub_1B64324(gameObject);
  *((_DWORD *)gameObject + 34) = LODWORD(this->fields.outPos.fields.z);
  *((_QWORD *)gameObject + 16) = v16;
  z = this->fields.inPos.fields.z;
  v13 = *(_QWORD *)&this->fields.inPos.fields.x;
  *((_DWORD *)gameObject + 8) = 6;
  *((float *)gameObject + 37) = z;
  *(_QWORD *)(gameObject + 140) = v13;
  v14 = (UITweener_o *)gameObject;
  v15 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v10, v11);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameIn_b__15_0__,
    0LL);
  UITweener__SetOnFinished(v14, v15, 0LL);
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
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  float z; // w8
  void *v12; // x9
  UITweener_o *v13; // x20
  EventDelegate_Callback_o *v14; // x21
  Il2CppClass *v15; // [xsp+0h] [xbp-30h]

  if ( (byte_49F8FE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__, method);
    sub_1B640C8(&BlankEarthShortcutButtonListViewObject_TypeInfo, v3);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v4);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v5);
    byte_49F8FE5 = 1;
  }
  v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v6 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    v6->static_fields->FUNC_ENTRY_ANIM,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = UITweener__Begin_object_(
         gameObject,
         BlankEarthShortcutButtonListViewObject_TypeInfo->static_fields->FRAME_OUT_ANIM_DURATION,
         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v15 = *(Il2CppClass **)&this->fields.inPos.fields.x;
  if ( !v8 )
    sub_1B64324(0LL);
  *(float *)&v8[8].monitor = this->fields.inPos.fields.z;
  v8[8].klass = v15;
  z = this->fields.outPos.fields.z;
  v12 = *(void **)&this->fields.outPos.fields.x;
  LODWORD(v8[2].klass) = 2;
  *((float *)&v8[9].klass + 1) = z;
  *(void **)((char *)&v8[8].monitor + 4) = v12;
  v13 = (UITweener_o *)v8;
  v14 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v9, v10);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewObject__FrameOut_b__16_0__,
    0LL);
  UITweener__SetOnFinished(v13, v14, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  UnityEngine_Transform__set_localPosition(transform, this->fields.outPos, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetEntryAnim(
        BlankEarthShortcutButtonListViewObject_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  BlankEarthShortcutButtonListViewObject_c *v9; // x0
  float slideInTimingDelayDivision; // s1
  float v11; // s0

  if ( (byte_49F8FE3 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthShortcutButtonListViewObject_TypeInfo, endAction);
    byte_49F8FE3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.animEndAction = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animEndAction, (int32_t)endAction, v6, v7);
  BlankEarthShortcutButtonListViewObject__QuickFrameOut(this, v8);
  v9 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  if ( !BlankEarthShortcutButtonListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewObject_TypeInfo);
    v9 = BlankEarthShortcutButtonListViewObject_TypeInfo;
  }
  slideInTimingDelayDivision = this->fields.slideInTimingDelayDivision;
  v11 = 0.0;
  if ( slideInTimingDelayDivision > 0.0 )
    v11 = (float)-this->fields.inPos.fields.y / slideInTimingDelayDivision;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v9->static_fields->FUNC_ENTRY_ANIM, v11, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetItem(
        BlankEarthShortcutButtonListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewObject_o *v4; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  BlankEarthShortcutButtonListViewObject_o *v9; // x22
  UnityEngine_GameObject_o *parent; // x8
  BlankEarthShortcutButtonListViewObject_o *v11; // x20

  if ( !item )
    goto LABEL_10;
  v4 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&item->fields.viewObject,
    (int32_t)this,
    (int32_t)seed,
    (int32_t)method);
  v4->fields.linkItem = item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.linkItem, (int32_t)item, v7, v8);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v4,
                                                       0LL);
  if ( !seed )
    goto LABEL_10;
  v9 = this;
  this = (BlankEarthShortcutButtonListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_10;
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
  if ( !v9 )
    goto LABEL_10;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0LL);
  this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v4,
                                                       0LL);
  if ( !this
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0LL),
        (this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)v4,
                                                              0LL)) == 0LL)
    || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v4->fields.baseScale, 0LL),
        this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)v4,
                                                             0LL),
        (parent = seed->fields.parent) == 0LL)
    || (v11 = this,
        this = (BlankEarthShortcutButtonListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL),
        !v11) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v11, (int32_t)this, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v4, 1, 0LL);
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewObject_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._9_SetInput.method)(
    v4,
    1LL,
    v4->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewObject_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B64324(0LL);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(itemDraw, isEnable, method);
}


void __fastcall BlankEarthShortcutButtonListViewObject__SetupDisp(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x2
  BlankEarthShortcutButtonListViewItemDraw_o *transform; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8FE2 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthShortcutButtonListViewItem_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8FE2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(BlankEarthShortcutButtonListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (BlankEarthShortcutButtonListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == BlankEarthShortcutButtonListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    transform = this->fields.itemDraw;
    if ( !transform )
      goto LABEL_18;
    BlankEarthShortcutButtonListViewItemDraw__SetItem(transform, (BlankEarthShortcutButtonListViewItem_o *)v6, v8);
    if ( this->fields.listItemWidth > 0.0 )
      return;
    transform = this->fields.itemDraw;
    if ( !transform
      || (this->fields.listItemWidth = BlankEarthShortcutButtonListViewItemDraw__GetButtonWidth(transform, v10),
          (transform = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL)) == 0LL) )
    {
LABEL_18:
      sub_1B64324(transform);
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
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (ServantStatusBattleListViewItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1B6406C(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewObject___FrameOut_b__16_0(
        BlankEarthShortcutButtonListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_animEndAction; // x0
  System_Action_o *animEndAction; // t1

  animEndAction = this->fields.animEndAction;
  p_animEndAction = (ServantStatusBattleListViewItem_o *)&this->fields.animEndAction;
  p_animEndAction->klass = 0LL;
  sub_1B6406C(p_animEndAction, 0, v2, v3);
  ActionExtensions__Call(animEndAction, 0LL);
}