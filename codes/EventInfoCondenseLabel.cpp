void __fastcall EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B16A27 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B16A27 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.beforeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.beforeText, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *label; // x20
  UILabel_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UILabel_o *v13; // x8
  struct System_String_o *mText; // x1

  if ( (byte_4B16A26 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B16A26 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 && this->fields.condensedWidth >= 1 )
  {
    v13 = this->fields.label;
    if ( !v13
      || (mText = v13->fields.mText,
          this->fields.beforeText = mText,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.beforeText, (int64_t)mText, v7, v8, v9, v10, v11, v12),
          (v5 = this->fields.label) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    UILabel__SetCondensedScale(v5, this->fields.condensedWidth, 0LL);
  }
}


void __fastcall EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4B16A24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method, v2);
    byte_4B16A24 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.label = (struct UILabel_o *)Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.label, (int64_t)Component_object, v7, v8, v9, v10, v11, v12);
  EventInfoCondenseLabel__SetCondensedScale(this, v13);
}


void __fastcall EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *label; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  const MethodInfo *v8; // x1

  if ( (byte_4B16A25 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B16A25 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(label, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.label;
    if ( !v7 )
      sub_1BCAA3C(v5, v6);
    if ( System_String__op_Inequality(this->fields.beforeText, v7->fields.mText, 0LL) )
      EventInfoCondenseLabel__SetCondensedScale(this, v8);
  }
}