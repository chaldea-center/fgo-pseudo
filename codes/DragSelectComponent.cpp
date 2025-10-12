void DragSelectComponent___ctor(DragSelectComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void DragSelectComponent__Set(
        DragSelectComponent_o *this,
        int32_t selectNum,
        int32_t dragSelectNum,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelectObject; // x22
  void *v8; // x0
  UnityEngine_Object_o *dragSeletBase; // x22
  UnityEngine_Object_o *selectObject; // x21
  UILabel_o *selectTextLabel; // x21
  int v12; // w20
  int32_t condensedWidth; // w1
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C36D84 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36D84 = 1;
  }
  v14 = 0;
  dragSelectObject = (UnityEngine_Object_o *)this->fields.dragSelectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSelectObject, 0, 0) )
  {
    v8 = this->fields.dragSelectObject;
    if ( !v8 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, dragSelectNum > 0, 0);
  }
  dragSeletBase = (UnityEngine_Object_o *)this->fields.dragSeletBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSeletBase, 0, 0) )
  {
    v8 = this->fields.dragSeletBase;
    if ( !v8 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, dragSelectNum >= 0, 0);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    v8 = this->fields.selectObject;
    if ( v8 )
    {
      if ( selectNum < 0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 0, 0);
        return;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 1, 0);
      selectTextLabel = this->fields.selectTextLabel;
      v12 = selectNum + 1;
      v14 = v12;
      v8 = System_Int32__ToString((int32_t)&v14, 0);
      if ( selectTextLabel )
      {
        UILabel__set_text(selectTextLabel, (System_String_o *)v8, 0);
        if ( !this->fields.isCondensedScale )
          return;
        v8 = this->fields.selectTextLabel;
        if ( v12 >= 100 )
        {
          if ( v8 )
          {
            condensedWidth = this->fields.condensedWidth;
            goto LABEL_26;
          }
        }
        else if ( v8 )
        {
          condensedWidth = *((_DWORD *)v8 + 42);
LABEL_26:
          UILabel__SetCondensedScale((UILabel_o *)v8, condensedWidth, 0, 0);
          return;
        }
      }
    }
LABEL_28:
    sub_1C32E7C(v8);
  }
}


void DragSelectComponent__setOverHundredNumCondensedScale(
        DragSelectComponent_o *this,
        int32_t width,
        const MethodInfo *method)
{
  int32_t v3; // w8

  this->fields.isCondensedScale = 1;
  if ( width == -1 )
    v3 = 30;
  else
    v3 = width;
  this->fields.condensedWidth = v3;
}