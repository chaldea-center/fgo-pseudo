void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x2
  struct System_String_array *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  struct BattleSelectCommandComponent_StaticFields *static_fields; // x0

  if ( (byte_40F7533 & 1) == 0 )
  {
    sub_B16FFC(&BattleSelectCommandComponent_TypeInfo, v1);
    sub_B16FFC(&string___TypeInfo, v3);
    sub_B16FFC(&StringLiteral_17544/*"commandcard_select_3rd"*/, v4);
    sub_B16FFC(&StringLiteral_17543/*"commandcard_select_2nd"*/, v5);
    sub_B16FFC(&StringLiteral_17542/*"commandcard_select_1st"*/, v6);
    byte_40F7533 = 1;
  }
  v7 = sub_B17014(string___TypeInfo, 3LL, v2);
  if ( !v7 )
    sub_B170D4();
  v9 = (struct System_String_array *)v7;
  v10 = StringLiteral_17542/*"commandcard_select_1st"*/;
  if ( StringLiteral_17542/*"commandcard_select_1st"*/ )
  {
    v10 = sub_B170BC(StringLiteral_17542/*"commandcard_select_1st"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_21;
    v11 = StringLiteral_17542/*"commandcard_select_1st"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v9->max_length )
    goto LABEL_20;
  v9->m_Items[0] = (System_String_o *)v11;
  sub_B16F98(v9->m_Items, v11);
  v10 = StringLiteral_17543/*"commandcard_select_2nd"*/;
  if ( StringLiteral_17543/*"commandcard_select_2nd"*/ )
  {
    v10 = sub_B170BC(StringLiteral_17543/*"commandcard_select_2nd"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_21;
    v11 = StringLiteral_17543/*"commandcard_select_2nd"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_20;
  v9->m_Items[1] = (System_String_o *)v11;
  sub_B16F98(&v9->m_Items[1], v11);
  v10 = StringLiteral_17544/*"commandcard_select_3rd"*/;
  if ( StringLiteral_17544/*"commandcard_select_3rd"*/ )
  {
    v10 = sub_B170BC(StringLiteral_17544/*"commandcard_select_3rd"*/, v9->obj.klass->_1.element_class);
    if ( v10 )
    {
      v11 = StringLiteral_17544/*"commandcard_select_3rd"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B170F4();
    sub_B170A0();
  }
  v11 = 0LL;
LABEL_18:
  if ( v9->max_length <= 2 )
  {
LABEL_20:
    sub_B17100(v10, v11, v8);
    sub_B170A0();
  }
  v9->m_Items[2] = (System_String_o *)v11;
  sub_B16F98(&v9->m_Items[2], v11);
  static_fields = BattleSelectCommandComponent_TypeInfo->static_fields;
  static_fields->frameFileList = v9;
  sub_B16F98(static_fields, v9);
}


void __fastcall BattleSelectCommandComponent___ctor(BattleSelectCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandComponent__setIndex(
        BattleSelectCommandComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UISprite_o *markSprite; // x21
  BattleSelectCommandComponent_c *v8; // x0
  struct System_String_array *frameFileList; // x8
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *Component_srcLineSprite; // x19

  if ( (byte_40F7532 & 1) == 0 )
  {
    sub_B16FFC(&BattleSelectCommandComponent_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F7532 = 1;
  }
  markSprite = this->fields.markSprite;
  v8 = BattleSelectCommandComponent_TypeInfo;
  if ( (BYTE3(BattleSelectCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo);
    v8 = BattleSelectCommandComponent_TypeInfo;
  }
  frameFileList = v8->static_fields->frameFileList;
  if ( !frameFileList )
    goto LABEL_18;
  if ( frameFileList->max_length <= index )
  {
    sub_B17100(v8, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  if ( !markSprite )
    goto LABEL_18;
  UISprite__set_spriteName(markSprite, frameFileList->m_Items[index], 0LL);
  v10 = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !v10 )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_srcLineSprite = (UITweener_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      UITweener__ResetToBeginning(Component_srcLineSprite, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
}