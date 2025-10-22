void CostSpriteViewObject___ctor(CostSpriteViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C541E8 & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    byte_4C541E8 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CostSpriteViewObject__Awake(CostSpriteViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C541E5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CostSpriteViewItemDraw___);
    byte_4C541E5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3E7C0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CostSpriteViewItemDraw___);
  this->fields.itemDraw = (struct CostSpriteViewItemDraw_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void CostSpriteViewObject__Init(CostSpriteViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C3E7C0(transform, v4);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  CostSpriteViewObject__SetupDisp(this, v5);
}


bool CostSpriteViewObject__IsCostSpriteEnabled(CostSpriteViewObject_o *this, const MethodInfo *method)
{
  struct CostSpriteViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (CostSpriteViewObject_o *)itemDraw->fields.costSprite) == 0 )
    sub_1C3E7C0(this, method);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
}


void CostSpriteViewObject__OnDestroy(CostSpriteViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C541E6 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C541E6 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C3E508(p_dragObject, 0, v7, v8);
  }
}


void CostSpriteViewObject__SetupDisp(CostSpriteViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CostSpriteViewItemDraw_o *v9; // x0

  if ( (byte_4C541E7 & 1) == 0 )
  {
    sub_1C3E564(&CostSpriteViewItem_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C541E7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = CostSpriteViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CostSpriteViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CostSpriteViewItem_TypeInfo )
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
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C3E7C0(0, v7);
    CostSpriteViewItemDraw__SetItem(v9, (CostSpriteViewItem_o *)v5, v8);
  }
}


// attributes: thunk
void CostSpriteViewObject__Start(CostSpriteViewObject_o *this, const MethodInfo *method)
{
  CostSpriteViewObject__Init(this, method);
}