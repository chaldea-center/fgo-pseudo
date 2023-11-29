void __fastcall SummonInfoLayout___ctor(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonInfoLayout__Awake(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FD49A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_FSOffset___, method);
    byte_40FD49A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (*(UnityEngine_Vector3_o *)&this->fields.infoControlLayoutDefault.fields.Position.fields.y = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  *(UnityEngine_Vector3_o *)&this->fields.infoControlLayoutDefault.fields.Scale.fields.y = UnityEngine_Transform__get_localScale(
                                                                                             v4,
                                                                                             0LL);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
  this->fields.fsOffset = (struct FSOffset_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fsOffset,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall SummonInfoLayout__UpdateDefault(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.infoControlLayoutDefault.fields.Position.fields.y,
          0LL),
        (v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(
    v4,
    *(UnityEngine_Vector3_o *)&this->fields.infoControlLayoutDefault.fields.Scale.fields.y,
    0LL);
  SummonInfoLayout__UpdateOffset(this, v5);
}


void __fastcall SummonInfoLayout__UpdateOffset(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  FSOffset_o *v4; // x0

  if ( (byte_40FD49B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD49B = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(fsOffset, 0LL, 0LL) )
  {
    v4 = this->fields.fsOffset;
    if ( !v4 )
      sub_B170D4();
    FSOffset__UpdateOffset(v4, 0LL);
  }
}


void __fastcall SummonInfoLayout__UpdatePc(SummonInfoLayout_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(
          transform,
          *(UnityEngine_Vector3_o *)&this->fields.infoControlLayoutPc.fields.Position.fields.y,
          0LL),
        (v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(
    v4,
    *(UnityEngine_Vector3_o *)&this->fields.infoControlLayoutPc.fields.Scale.fields.y,
    0LL);
  SummonInfoLayout__UpdateOffset(this, v5);
}