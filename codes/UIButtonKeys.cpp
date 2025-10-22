void UIButtonKeys___ctor(UIButtonKeys_o *this, const MethodInfo *method)
{
  if ( (byte_4C5B34E & 1) == 0 )
  {
    sub_1C3E564(&UIKeyNavigation_TypeInfo);
    byte_4C5B34E = 1;
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
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *onLeft; // x21
  struct UIButtonKeys_o **p_selectOnLeft; // x21
  UnityEngine_Object_o *selectOnLeft; // x22
  struct UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *onRight; // x21
  struct UIButtonKeys_o **p_selectOnRight; // x21
  UnityEngine_Object_o *selectOnRight; // x22
  struct UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *onUp; // x21
  struct UIButtonKeys_o **p_selectOnUp; // x21
  UnityEngine_Object_o *selectOnUp; // x22
  struct UnityEngine_GameObject_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *onDown; // x21
  struct UIButtonKeys_o **p_selectOnDown; // x21
  UnityEngine_Object_o *selectOnDown; // x22
  struct UnityEngine_GameObject_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3

  if ( (byte_4C5B34D & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B34D = 1;
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
      v7 = (UnityEngine_Component_o *)*p_selectOnClick;
      if ( !*p_selectOnClick )
        goto LABEL_54;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onClick = gameObject;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)gameObject, v9, v10);
      *p_selectOnClick = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectOnClick, 0, v11, v12);
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
      v7 = (UnityEngine_Component_o *)*p_selectOnLeft;
      if ( !*p_selectOnLeft )
        goto LABEL_54;
      v16 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onLeft = v16;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onLeft, (int32_t)v16, v17, v18);
      *p_selectOnLeft = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectOnLeft, 0, v19, v20);
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
      v7 = (UnityEngine_Component_o *)*p_selectOnRight;
      if ( !*p_selectOnRight )
        goto LABEL_54;
      v24 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onRight = v24;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onRight, (int32_t)v24, v25, v26);
      *p_selectOnRight = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectOnRight, 0, v27, v28);
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
      v7 = (UnityEngine_Component_o *)*p_selectOnUp;
      if ( !*p_selectOnUp )
        goto LABEL_54;
      v32 = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.onUp = v32;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onUp, (int32_t)v32, v33, v34);
      *p_selectOnUp = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectOnUp, 0, v35, v36);
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
      v7 = (UnityEngine_Component_o *)*p_selectOnDown;
      if ( *p_selectOnDown )
      {
        v40 = UnityEngine_Component__get_gameObject(v7, 0);
        this->fields.onDown = v40;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onDown, (int32_t)v40, v41, v42);
        *p_selectOnDown = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectOnDown, 0, v43, v44);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
        return;
      }
LABEL_54:
      sub_1C3E7C0(v7, v6);
    }
  }
}