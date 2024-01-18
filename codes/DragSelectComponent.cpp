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
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *dragSeletBase; // x22
  UnityEngine_Object_o *selectObject; // x21
  UILabel_o *selectTextLabel; // x21
  int v13; // w20
  int32_t condensedWidth; // w1
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418947E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&selectNum);
    byte_418947E = 1;
  }
  v15 = 0;
  dragSelectObject = (UnityEngine_Object_o *)this->fields.dragSelectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragSelectObject, 0LL, 0LL) )
  {
    v9 = this->fields.dragSelectObject;
    if ( !v9 )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(v9, dragSelectNum > 0, 0LL);
  }
  dragSeletBase = (UnityEngine_Object_o *)this->fields.dragSeletBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragSeletBase, 0LL, 0LL) )
  {
    v9 = this->fields.dragSeletBase;
    if ( !v9 )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(v9, dragSelectNum >= 0, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    v9 = this->fields.selectObject;
    if ( v9 )
    {
      if ( (selectNum & 0x80000000) != 0 )
      {
        UnityEngine_GameObject__SetActive(v9, 0, 0LL);
        return;
      }
      UnityEngine_GameObject__SetActive(v9, 1, 0LL);
      selectTextLabel = this->fields.selectTextLabel;
      v13 = selectNum + 1;
      v15 = v13;
      v9 = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v15, 0LL);
      if ( selectTextLabel )
      {
        UILabel__set_text(selectTextLabel, (System_String_o *)v9, 0LL);
        if ( !this->fields.isCondensedScale )
          return;
        v9 = (UnityEngine_GameObject_o *)this->fields.selectTextLabel;
        if ( v13 >= 100 )
        {
          if ( v9 )
          {
            condensedWidth = this->fields.condensedWidth;
            goto LABEL_29;
          }
        }
        else if ( v9 )
        {
          condensedWidth = v9[6].fields.m_CachedPtr;
LABEL_29:
          UILabel__SetCondensedScale((UILabel_o *)v9, condensedWidth, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B2C434(v9, v8);
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