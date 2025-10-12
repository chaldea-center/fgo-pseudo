void UIButtonKeys___ctor(UIButtonKeys_o *this, const MethodInfo *method)
{
  if ( (byte_4C3BFDC & 1) == 0 )
  {
    sub_1C32C20(&UIKeyNavigation_TypeInfo);
    byte_4C3BFDC = 1;
  }
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonKeys__OnEnable(UIButtonKeys_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIButtonKeys__Upgrade(this, method);
  UIKeyNavigation__OnEnable((UIKeyNavigation_o *)this, v3);
}


void UIButtonKeys__Upgrade(UIButtonKeys_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *onClick; // x21
  struct UIButtonKeys_o **p_selectOnClick; // x21
  UnityEngine_Object_o *selectOnClick; // x22
  UnityEngine_Component_o *v6; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *onLeft; // x21
  struct UIButtonKeys_o **p_selectOnLeft; // x21
  UnityEngine_Object_o *selectOnLeft; // x22
  struct UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *onRight; // x21
  struct UIButtonKeys_o **p_selectOnRight; // x21
  UnityEngine_Object_o *selectOnRight; // x22
  struct UnityEngine_GameObject_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *onUp; // x21
  struct UIButtonKeys_o **p_selectOnUp; // x21
  UnityEngine_Object_o *selectOnUp; // x22
  struct UnityEngine_GameObject_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *onDown; // x21
  struct UIButtonKeys_o **p_selectOnDown; // x21
  UnityEngine_Object_o *selectOnDown; // x22
  struct UnityEngine_GameObject_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3

  if ( (byte_4C3BFDB & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFDB = 1;
  }
  onClick = (UnityEngine_Object_o *)this->fields.onClick;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onClick, 0, 0) )
  {
    p_selectOnClick = &this->fields.selectOnClick;
    selectOnClick = (UnityEngine_Object_o *)this->fields.selectOnClick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnClick, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)*p_selectOnClick;
      if ( !*p_selectOnClick )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0);
      this->fields.onClick = gameObject;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)gameObject, v8, v9);
      *p_selectOnClick = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectOnClick, 0, v10, v11);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onLeft = (UnityEngine_Object_o *)this->fields.onLeft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onLeft, 0, 0) )
  {
    p_selectOnLeft = &this->fields.selectOnLeft;
    selectOnLeft = (UnityEngine_Object_o *)this->fields.selectOnLeft;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnLeft, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)*p_selectOnLeft;
      if ( !*p_selectOnLeft )
        goto LABEL_54;
      v15 = UnityEngine_Component__get_gameObject(v6, 0);
      this->fields.onLeft = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onLeft, (int32_t)v15, v16, v17);
      *p_selectOnLeft = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectOnLeft, 0, v18, v19);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onRight = (UnityEngine_Object_o *)this->fields.onRight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onRight, 0, 0) )
  {
    p_selectOnRight = &this->fields.selectOnRight;
    selectOnRight = (UnityEngine_Object_o *)this->fields.selectOnRight;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnRight, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)*p_selectOnRight;
      if ( !*p_selectOnRight )
        goto LABEL_54;
      v23 = UnityEngine_Component__get_gameObject(v6, 0);
      this->fields.onRight = v23;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onRight, (int32_t)v23, v24, v25);
      *p_selectOnRight = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectOnRight, 0, v26, v27);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onUp = (UnityEngine_Object_o *)this->fields.onUp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onUp, 0, 0) )
  {
    p_selectOnUp = &this->fields.selectOnUp;
    selectOnUp = (UnityEngine_Object_o *)this->fields.selectOnUp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnUp, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)*p_selectOnUp;
      if ( !*p_selectOnUp )
        goto LABEL_54;
      v31 = UnityEngine_Component__get_gameObject(v6, 0);
      this->fields.onUp = v31;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onUp, (int32_t)v31, v32, v33);
      *p_selectOnUp = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectOnUp, 0, v34, v35);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
    }
  }
  onDown = (UnityEngine_Object_o *)this->fields.onDown;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(onDown, 0, 0) )
  {
    p_selectOnDown = &this->fields.selectOnDown;
    selectOnDown = (UnityEngine_Object_o *)this->fields.selectOnDown;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectOnDown, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)*p_selectOnDown;
      if ( *p_selectOnDown )
      {
        v39 = UnityEngine_Component__get_gameObject(v6, 0);
        this->fields.onDown = v39;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onDown, (int32_t)v39, v40, v41);
        *p_selectOnDown = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectOnDown, 0, v42, v43);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
        return;
      }
LABEL_54:
      sub_1C32E7C(v6);
    }
  }
}