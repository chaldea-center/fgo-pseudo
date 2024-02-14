void __fastcall EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_421558F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_421558F = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this[1].klass = (EventInfoCondenseLabel_c *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  struct System_String_o *beforeText; // x20
  struct System_String_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *v11; // x8
  EventInfoCondenseLabel_c *klass; // x1

  if ( (byte_421558E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421558E = 1;
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
    v11 = this->fields.beforeText;
    if ( !v11
      || (klass = (EventInfoCondenseLabel_c *)v11[17].klass,
          this[1].klass = klass,
          sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)klass, v5, v6, v7, v8, v9, v10),
          (v4 = this->fields.beforeText) == 0LL) )
    {
      sub_B0D97C(v4);
    }
    UILabel__SetCondensedScale((UILabel_o *)v4, (int32_t)this->fields.label, 0LL);
  }
}


void __fastcall EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_String_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_421558C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    byte_421558C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  Component_srcLineSprite = (struct System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.beforeText = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.beforeText,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  EventInfoCondenseLabel__SetCondensedScale(this, v11);
}


void __fastcall EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  struct System_String_o *beforeText; // x20
  _BOOL8 v4; // x0
  struct System_String_o *v5; // x8
  const MethodInfo *v6; // x1

  if ( (byte_421558D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421558D = 1;
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
    v5 = this->fields.beforeText;
    if ( !v5 )
      sub_B0D97C(v4);
    if ( System_String__op_Inequality((System_String_o *)this[1].klass, (System_String_o *)v5[17].klass, 0LL) )
      EventInfoCondenseLabel__SetCondensedScale(this, v6);
  }
}