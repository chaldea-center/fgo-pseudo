void UIDragDropListViewItem___ctor(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  this->fields.mTouchID = 0x80000000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropListViewItem__DragStart(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *touchPress; // x20
  __int64 v4; // x1
  UITouchPress_o *transform; // x0
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB7B1D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B1D = 1;
  }
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
  {
    transform = this->fields.touchPress;
    if ( !transform )
      goto LABEL_11;
    UITouchPress__PressReset(transform, 0);
  }
  transform = (UITouchPress_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0),
        transform = (UITouchPress_o *)this->fields.mListViewObject,
        this->fields.mTarget = position,
        !transform) )
  {
LABEL_11:
    sub_1C6BC60(transform, v4);
  }
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UITouchPress_o *, Il2CppClass *))transform->klass[1]._1.element_class)(
                                            transform,
                                            transform->klass[1]._1.castClass);
  this->fields.dragObject = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8);
  ((void (__fastcall *)(UIDragDropListViewItem_o *, const MethodInfo *))this->klass->vtable._6_OnDragDropStart.methodPtr)(
    this,
    this->klass->vtable._6_OnDragDropStart.method);
}


void UIDragDropListViewItem__OnDrag(
        UIDragDropListViewItem_o *this,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  int32_t mTouchID; // w20
  UICamera_c *v8; // x0
  UIRoot_o *mRoot; // x0
  float pixelSizeAdjustment; // s0
  long double v11; // q3

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4CB7B1E & 1) == 0 )
  {
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB7B1E = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    mTouchID = this->fields.mTouchID;
    v8 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v8 = UICamera_TypeInfo;
    }
    if ( mTouchID == v8->static_fields->currentTouchID )
    {
      mRoot = this->fields.mRoot;
      if ( !mRoot )
        sub_1C6BC60(0, v6);
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment(mRoot, 0);
      *(float *)&v11 = x * pixelSizeAdjustment;
      ((void (__fastcall *)(UIDragDropListViewItem_o *, const MethodInfo *, long double, float, float))this->klass->vtable._7_OnDragDropMove.methodPtr)(
        this,
        this->klass->vtable._7_OnDragDropMove.method,
        v11,
        y * pixelSizeAdjustment,
        pixelSizeAdjustment * 0.0);
    }
  }
}


void UIDragDropListViewItem__OnDragDropMove(
        UIDragDropListViewItem_o *this,
        UnityEngine_Vector3_o delta,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4CB7B21 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B21 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
      sub_1C6BC60(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0);
  }
}


void UIDragDropListViewItem__OnDragDropRelease(
        UIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x21
  UnityEngine_Object_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *mCollider; // x20
  __int64 v10; // x1
  UnityEngine_Collider_o *mTrans; // x0
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4CB7B22 & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B22 = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v7, v8);
  }
  this->fields.mTouchID = 0x80000000;
  mCollider = (UnityEngine_Object_o *)this->fields.mCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mCollider, 0, 0) )
  {
    mTrans = this->fields.mCollider;
    if ( !mTrans )
      goto LABEL_24;
    UnityEngine_Collider__set_enabled(mTrans, 1, 0);
  }
  mTrans = (UnityEngine_Collider_o *)this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_24;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mTrans, 0);
  this->fields.mParent = parent;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParent, (int32_t)parent, v13, v14);
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
  {
    mTrans = (UnityEngine_Collider_o *)this->fields.mDragScrollView;
    if ( !mTrans )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mTrans, 1, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__MarkParentAsChanged(gameObject, 0);
  mTrans = (UnityEngine_Collider_o *)this->fields.mListViewObject;
  if ( !mTrans )
LABEL_24:
    sub_1C6BC60(mTrans, v10);
  ListViewObject__DragMaskEnd((ListViewObject_o *)mTrans, 0);
}


void UIDragDropListViewItem__OnDragDropStart(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *mTrans; // x0
  UnityEngine_Object_o *mCollider; // x20
  UICamera_c *v7; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *mParent; // x20
  Il2CppObject *v13; // x0
  struct UIRoot_o **p_mRoot; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4CB7B20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NGUITools_FindInParents_UIRoot____78653312);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB7B20 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)this->fields.mDragScrollView;
    if ( !mTrans )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(mTrans, 0, 0);
  }
  mCollider = (UnityEngine_Object_o *)this->fields.mCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mCollider, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)this->fields.mCollider;
    if ( !mTrans )
      goto LABEL_20;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mTrans, 0, 0);
  }
  v7 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera_TypeInfo;
  }
  static_fields = v7->static_fields;
  mTrans = (UnityEngine_Behaviour_o *)this->fields.mTrans;
  this->fields.mTouchID = static_fields->currentTouchID;
  if ( !mTrans )
    goto LABEL_20;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mTrans, 0);
  this->fields.mParent = parent;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParent, (int32_t)parent, v10, v11);
  mParent = this->fields.mParent;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v13 = NGUITools__FindInParents_object__52191176(
          mParent,
          (const MethodInfo_31C5FC8 *)Method_NGUITools_FindInParents_UIRoot____78653312);
  this->fields.mRoot = (struct UIRoot_o *)v13;
  p_mRoot = &this->fields.mRoot;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_mRoot, (int32_t)v13, v15, v16);
  mTrans = (UnityEngine_Behaviour_o *)p_mRoot[2];
  if ( !mTrans )
LABEL_20:
    sub_1C6BC60(mTrans, v4);
  ListViewObject__DragMaskStart((ListViewObject_o *)mTrans, 0);
}


void UIDragDropListViewItem__OnDragEnd(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  int32_t mTouchID; // w21
  UICamera_c *v4; // x0
  struct UICamera_StaticFields *static_fields; // x8

  if ( (byte_4CB7B1F & 1) == 0 )
  {
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB7B1F = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    mTouchID = this->fields.mTouchID;
    v4 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = UICamera_TypeInfo;
    }
    static_fields = v4->static_fields;
    if ( mTouchID == static_fields->currentTouchID )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = UICamera_TypeInfo->static_fields;
      }
      ((void (__fastcall *)(UIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
        this,
        static_fields->hoveredObject,
        this->klass->vtable._8_OnDragDropRelease.method);
    }
  }
}


void UIDragDropListViewItem__OnDragStart(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  _QWORD *p_klass; // x0
  int32_t restriction; // w8
  __int64 v6; // x8
  float mPressTime; // s8
  __int64 v8; // x8

  if ( (byte_4CB7B1C & 1) == 0 )
  {
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB7B1C = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && this->fields.mTouchID == 0x80000000
    && this->fields.mPressTime >= 0.0 )
  {
    p_klass = &this->fields.mListViewObject->klass;
    if ( !p_klass )
      goto LABEL_23;
    if ( ((*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*p_klass + 424LL))(p_klass, *(_QWORD *)(*p_klass + 432LL)) & 1) != 0 )
    {
      restriction = this->fields.restriction;
      switch ( restriction )
      {
        case 3:
          mPressTime = this->fields.mPressTime;
          if ( (float)(mPressTime + 1.0) <= RealTime__get_time(0) )
            goto LABEL_17;
          break;
        case 2:
          p_klass = &UICamera_TypeInfo->_1.image;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            p_klass = &UICamera_TypeInfo->_1.image;
          }
          v8 = *(_QWORD *)(p_klass[23] + 160LL);
          if ( !v8 )
            goto LABEL_23;
          if ( fabsf(*(float *)(v8 + 40)) <= fabsf(*(float *)(v8 + 44)) )
            goto LABEL_17;
          break;
        case 1:
          p_klass = &UICamera_TypeInfo->_1.image;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            p_klass = &UICamera_TypeInfo->_1.image;
          }
          v6 = *(_QWORD *)(p_klass[23] + 160LL);
          if ( v6 )
          {
            if ( fabsf(*(float *)(v6 + 40)) < fabsf(*(float *)(v6 + 44)) )
              return;
LABEL_17:
            UIDragDropListViewItem__DragStart(this, v3);
            return;
          }
LABEL_23:
          sub_1C6BC60(p_klass, v3);
        default:
          goto LABEL_17;
      }
    }
  }
}


void UIDragDropListViewItem__OnPress(UIDragDropListViewItem_o *this, bool isPressed, const MethodInfo *method)
{
  float time; // s0

  time = -1.0;
  if ( isPressed )
    time = RealTime__get_time(0);
  this->fields.mPressTime = time;
}


void UIDragDropListViewItem__PressReset(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  this->fields.mPressTime = -1.0;
}


void UIDragDropListViewItem__SetBaseTransform(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB7B1A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    byte_4CB7B1A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = (struct ListViewObject_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mListViewObject, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
  this->fields.mDragScrollView = (struct UIDragScrollView_o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mDragScrollView, (int32_t)v6, v7, v8);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v10, v11);
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mCollider, (int32_t)v12, v13, v14);
}


void UIDragDropListViewItem__SetEnable(UIDragDropListViewItem_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *mCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0
  UnityEngine_Object_o *mDragScrollView; // x21

  if ( (byte_4CB7B1B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B1B = 1;
  }
  mCollider = (UnityEngine_Object_o *)this->fields.mCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mCollider, 0, 0) )
  {
    v7 = this->fields.mCollider;
    if ( !v7 )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled(v7, flag, 0);
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.mDragScrollView;
    if ( v7 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, flag, 0);
      return;
    }
LABEL_14:
    sub_1C6BC60(v7, v6);
  }
}


void UIDragDropListViewItem__SetEnabledColliderDragMask(
        UIDragDropListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  ListViewObject_o *mListViewObject; // x0

  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    sub_1C6BC60(0, value);
  ListViewObject__SetEnabledColliderDragMask(mListViewObject, value, 0);
}


void UIDragDropListViewItem__Start(UIDragDropListViewItem_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(UIDragDropListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetBaseTransform.methodPtr)(
    this,
    this->klass->vtable._5_SetBaseTransform.method);
}