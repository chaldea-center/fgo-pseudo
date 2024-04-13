void __fastcall EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E94AB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E94AB = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this[1].klass = (EventInfoCondenseLabel_c *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_String_o *beforeText; // x20
  struct System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *v14; // x8
  EventInfoCondenseLabel_c *klass; // x1

  if ( (byte_42E94AA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94AA = 1;
  }
  beforeText = this->fields.beforeText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (struct System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)beforeText, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 && SLODWORD(this->fields.label) >= 1 )
  {
    v14 = this->fields.beforeText;
    if ( !v14
      || (klass = (EventInfoCondenseLabel_c *)v14[17].klass,
          this[1].klass = klass,
          sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)klass, v8, v9, v10, v11, v12, v13),
          (v6 = this->fields.beforeText) == 0LL) )
    {
      sub_B5D69C(v6, v7);
    }
    UILabel__SetCondensedScale((UILabel_o *)v6, (int32_t)this->fields.label, 0LL);
  }
}


void __fastcall EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct System_String_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_42E94A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, (_DWORD)method, v2, v3);
    byte_42E94A8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  Component_srcLineSprite = (struct System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.beforeText = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.beforeText,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  EventInfoCondenseLabel__SetCondensedScale(this, v14);
}


void __fastcall EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_String_o *beforeText; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct System_String_o *v8; // x8
  const MethodInfo *v9; // x1

  if ( (byte_42E94A9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94A9 = 1;
  }
  beforeText = this->fields.beforeText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)beforeText, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.beforeText;
    if ( !v8 )
      sub_B5D69C(v6, v7);
    if ( System_String__op_Inequality((System_String_o *)this[1].klass, (System_String_o *)v8[17].klass, 0LL) )
      EventInfoCondenseLabel__SetCondensedScale(this, v9);
  }
}