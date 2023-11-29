void __fastcall DragSelectComponent___ctor(DragSelectComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DragSelectComponent__Set(
        DragSelectComponent_o *this,
        int32_t selectNum,
        int32_t dragSelectNum,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelectObject; // x22
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *dragSeletBase; // x22
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *selectTextLabel; // x21
  int v14; // w20
  System_String_o *v15; // x0
  struct UILabel_o *v16; // x0
  int32_t condensedWidth; // w1
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBCE5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&selectNum);
    byte_40FBCE5 = 1;
  }
  v18 = 0;
  dragSelectObject = (UnityEngine_Object_o *)this->fields.dragSelectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragSelectObject, 0LL, 0LL) )
  {
    v8 = this->fields.dragSelectObject;
    if ( !v8 )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(v8, dragSelectNum > 0, 0LL);
  }
  dragSeletBase = (UnityEngine_Object_o *)this->fields.dragSeletBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragSeletBase, 0LL, 0LL) )
  {
    v10 = this->fields.dragSeletBase;
    if ( !v10 )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(v10, dragSelectNum >= 0, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    v12 = this->fields.selectObject;
    if ( v12 )
    {
      if ( (selectNum & 0x80000000) != 0 )
      {
        UnityEngine_GameObject__SetActive(v12, 0, 0LL);
        return;
      }
      UnityEngine_GameObject__SetActive(v12, 1, 0LL);
      selectTextLabel = this->fields.selectTextLabel;
      v14 = selectNum + 1;
      v18 = v14;
      v15 = System_Int32__ToString((int32_t)&v18, 0LL);
      if ( selectTextLabel )
      {
        UILabel__set_text(selectTextLabel, v15, 0LL);
        if ( !this->fields.isCondensedScale )
          return;
        v16 = this->fields.selectTextLabel;
        if ( v14 >= 100 )
        {
          if ( v16 )
          {
            condensedWidth = this->fields.condensedWidth;
            goto LABEL_29;
          }
        }
        else if ( v16 )
        {
          condensedWidth = v16->fields.mWidth;
LABEL_29:
          UILabel__SetCondensedScale(v16, condensedWidth, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
}


void __fastcall DragSelectComponent__setOverHundredNumCondensedScale(
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