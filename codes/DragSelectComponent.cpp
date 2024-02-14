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
  UnityEngine_Object_o *selectObject; // x21
  UILabel_o *selectTextLabel; // x21
  int v12; // w20
  int32_t condensedWidth; // w1
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42162DB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&selectNum);
    byte_42162DB = 1;
  }
  v14 = 0;
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
    v8 = this->fields.dragSeletBase;
    if ( !v8 )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(v8, dragSelectNum >= 0, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    v8 = this->fields.selectObject;
    if ( v8 )
    {
      if ( (selectNum & 0x80000000) != 0 )
      {
        UnityEngine_GameObject__SetActive(v8, 0, 0LL);
        return;
      }
      UnityEngine_GameObject__SetActive(v8, 1, 0LL);
      selectTextLabel = this->fields.selectTextLabel;
      v12 = selectNum + 1;
      v14 = v12;
      v8 = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v14, 0LL);
      if ( selectTextLabel )
      {
        UILabel__set_text(selectTextLabel, (System_String_o *)v8, 0LL);
        if ( !this->fields.isCondensedScale )
          return;
        v8 = (UnityEngine_GameObject_o *)this->fields.selectTextLabel;
        if ( v12 >= 100 )
        {
          if ( v8 )
          {
            condensedWidth = this->fields.condensedWidth;
            goto LABEL_29;
          }
        }
        else if ( v8 )
        {
          condensedWidth = v8[6].fields.m_CachedPtr;
LABEL_29:
          UILabel__SetCondensedScale((UILabel_o *)v8, condensedWidth, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B0D97C(v8);
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