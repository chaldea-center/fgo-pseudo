void __fastcall EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B673E1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B673E1 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.beforeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.beforeText, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UILabel_o *v12; // x8
  struct System_String_o *mText; // x1

  if ( (byte_4B673E0 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B673E0 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 && this->fields.condensedWidth >= 1 )
  {
    v12 = this->fields.label;
    if ( !v12
      || (mText = v12->fields.mText,
          this->fields.beforeText = mText,
          sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.beforeText, (int64_t)mText, v6, v7, v8, v9, v10, v11),
          (v4 = this->fields.label) == 0LL) )
    {
      sub_1BE4D28(v4, v5);
    }
    UILabel__SetCondensedScale(v4, this->fields.condensedWidth, 0, 0LL);
  }
}


void __fastcall EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4B673DE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    byte_4B673DE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.label = (struct UILabel_o *)Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.label, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
  EventInfoCondenseLabel__SetCondensedScale(this, v12);
}


void __fastcall EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_4B673DF & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B673DF = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(label, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.label;
    if ( !v6 )
      sub_1BE4D28(v4, v5);
    if ( System_String__op_Inequality(this->fields.beforeText, v6->fields.mText, 0LL) )
      EventInfoCondenseLabel__SetCondensedScale(this, v7);
  }
}