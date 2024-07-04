void __fastcall EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_48E333F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E333F = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.beforeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.beforeText, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct UILabel_o *v8; // x8
  struct System_String_o *mText; // x1

  if ( (byte_48E333E & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E333E = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 && this->fields.condensedWidth >= 1 )
  {
    v8 = this->fields.label;
    if ( !v8
      || (mText = v8->fields.mText,
          this->fields.beforeText = mText,
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.beforeText, (int32_t)mText, v6, v7),
          (v4 = this->fields.label) == 0LL) )
    {
      sub_1B00F28(v4, v5);
    }
    UILabel__SetCondensedScale(v4, this->fields.condensedWidth, 0LL);
  }
}


void __fastcall EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_48E333C & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    byte_48E333C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B00F28(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.label = (struct UILabel_o *)Component_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.label, (int32_t)Component_object, v6, v7);
  EventInfoCondenseLabel__SetCondensedScale(this, v8);
}


void __fastcall EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_48E333D & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E333D = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(label, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.label;
    if ( !v6 )
      sub_1B00F28(v4, v5);
    if ( System_String__op_Inequality(this->fields.beforeText, v6->fields.mText, 0LL) )
      EventInfoCondenseLabel__SetCondensedScale(this, v7);
  }
}