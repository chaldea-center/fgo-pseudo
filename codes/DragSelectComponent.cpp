void DragSelectComponent___ctor(DragSelectComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DragSelectComponent__Set(
        DragSelectComponent_o *this,
        int32_t selectNum,
        int32_t dragSelectNum,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelectObject; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  void *v10; // x0
  UnityEngine_Object_o *dragSeletBase; // x22
  __int64 v12; // x2
  UnityEngine_Object_o *selectObject; // x21
  UILabel_o *selectTextLabel; // x21
  int v15; // w20
  int32_t condensedWidth; // w1
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596FB71 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB71 = 1;
  }
  dragSelectObject = (UnityEngine_Object_o *)this->fields.dragSelectObject;
  v17 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&selectNum, *(_QWORD *)&dragSelectNum);
  if ( UnityEngine_Object__op_Inequality(dragSelectObject, 0, 0) )
  {
    v10 = this->fields.dragSelectObject;
    if ( !v10 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, dragSelectNum > 0, 0);
  }
  dragSeletBase = (UnityEngine_Object_o *)this->fields.dragSeletBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(dragSeletBase, 0, 0) )
  {
    v10 = this->fields.dragSeletBase;
    if ( !v10 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, dragSelectNum >= 0, 0);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    v10 = this->fields.selectObject;
    if ( selectNum < 0 )
    {
      if ( v10 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, 0, 0);
        return;
      }
    }
    else if ( v10 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, 1, 0);
      selectTextLabel = this->fields.selectTextLabel;
      v15 = selectNum + 1;
      v17 = v15;
      v10 = System_Int32__ToString((int32_t)&v17, 0);
      if ( selectTextLabel )
      {
        UILabel__set_text(selectTextLabel, (System_String_o *)v10, 0);
        if ( !this->fields.isCondensedScale )
          return;
        v10 = this->fields.selectTextLabel;
        if ( v15 >= 100 )
        {
          if ( v10 )
          {
            condensedWidth = this->fields.condensedWidth;
            goto LABEL_27;
          }
        }
        else if ( v10 )
        {
          condensedWidth = *((_DWORD *)v10 + 42);
LABEL_27:
          UILabel__SetCondensedScale((UILabel_o *)v10, condensedWidth, 0, 0);
          return;
        }
      }
    }
LABEL_29:
    sub_2213CDC(v10, v8);
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