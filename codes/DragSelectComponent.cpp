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
  __int64 v8; // x1
  void *v9; // x0
  UnityEngine_Object_o *dragSeletBase; // x22
  UnityEngine_Object_o *selectObject; // x21
  UILabel_o *selectTextLabel; // x21
  int v13; // w20
  int32_t condensedWidth; // w1
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2BBFF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BBFF = 1;
  }
  v15 = 0;
  dragSelectObject = (UnityEngine_Object_o *)this->fields.dragSelectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSelectObject, 0, 0) )
  {
    v9 = this->fields.dragSelectObject;
    if ( !v9 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, dragSelectNum > 0, 0);
  }
  dragSeletBase = (UnityEngine_Object_o *)this->fields.dragSeletBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSeletBase, 0, 0) )
  {
    v9 = this->fields.dragSeletBase;
    if ( !v9 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, dragSelectNum >= 0, 0);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    v9 = this->fields.selectObject;
    if ( v9 )
    {
      if ( selectNum < 0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 0, 0);
        return;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0);
      selectTextLabel = this->fields.selectTextLabel;
      v13 = selectNum + 1;
      v15 = v13;
      v9 = System_Int32__ToString((int32_t)&v15, 0);
      if ( selectTextLabel )
      {
        UILabel__set_text(selectTextLabel, (System_String_o *)v9, 0);
        if ( !this->fields.isCondensedScale )
          return;
        v9 = this->fields.selectTextLabel;
        if ( v13 >= 100 )
        {
          if ( v9 )
          {
            condensedWidth = this->fields.condensedWidth;
            goto LABEL_26;
          }
        }
        else if ( v9 )
        {
          condensedWidth = *((_DWORD *)v9 + 42);
LABEL_26:
          UILabel__SetCondensedScale((UILabel_o *)v9, condensedWidth, 0, 0);
          return;
        }
      }
    }
LABEL_28:
    sub_1C942F0(v9, v8);
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