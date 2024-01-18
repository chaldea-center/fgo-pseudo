void __fastcall EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4188629 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188629 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this[1].klass = (EventInfoCondenseLabel_c *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  struct System_String_o *beforeText; // x20
  struct System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o *v12; // x8
  EventInfoCondenseLabel_c *klass; // x1

  if ( (byte_4188628 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188628 = 1;
  }
  beforeText = this->fields.beforeText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (struct System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)beforeText, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 && SLODWORD(this->fields.label) >= 1 )
  {
    v12 = this->fields.beforeText;
    if ( !v12
      || (klass = (EventInfoCondenseLabel_c *)v12[17].klass,
          this[1].klass = klass,
          sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)klass, v6, v7, v8, v9, v10, v11),
          (v4 = this->fields.beforeText) == 0LL) )
    {
      sub_B2C434(v4, v5);
    }
    UILabel__SetCondensedScale((UILabel_o *)v4, (int32_t)this->fields.label, 0LL);
  }
}


void __fastcall EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_String_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4188626 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    byte_4188626 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  Component_srcLineSprite = (struct System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.beforeText = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.beforeText,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  EventInfoCondenseLabel__SetCondensedScale(this, v12);
}


void __fastcall EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  struct System_String_o *beforeText; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct System_String_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_4188627 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188627 = 1;
  }
  beforeText = this->fields.beforeText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)beforeText, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.beforeText;
    if ( !v6 )
      sub_B2C434(v4, v5);
    if ( System_String__op_Inequality((System_String_o *)this[1].klass, (System_String_o *)v6[17].klass, 0LL) )
      EventInfoCondenseLabel__SetCondensedScale(this, v7);
  }
}