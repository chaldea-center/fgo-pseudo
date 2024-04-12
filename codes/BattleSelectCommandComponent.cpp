void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  struct System_String_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleSelectCommandComponent_StaticFields *static_fields; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_42AD5E4 & 1) == 0 )
  {
    sub_B52984(&BattleSelectCommandComponent_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_17736/*"commandcard_select_3rd"*/);
    sub_B52984(&StringLiteral_17735/*"commandcard_select_2nd"*/);
    sub_B52984(&StringLiteral_17734/*"commandcard_select_1st"*/);
    byte_42AD5E4 = 1;
  }
  v1 = sub_B5299C(string___TypeInfo, 3LL);
  if ( !v1 )
    sub_B52A5C(0LL, v2);
  v3 = (struct System_String_array *)v1;
  v4 = StringLiteral_17734/*"commandcard_select_1st"*/;
  if ( StringLiteral_17734/*"commandcard_select_1st"*/ )
  {
    v4 = sub_B52A44(StringLiteral_17734/*"commandcard_select_1st"*/, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_21;
    v5 = StringLiteral_17734/*"commandcard_select_1st"*/;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v3->max_length )
    goto LABEL_20;
  v3->m_Items[0] = (System_String_o *)v5;
  sub_B52920(v3->m_Items);
  v4 = StringLiteral_17735/*"commandcard_select_2nd"*/;
  if ( StringLiteral_17735/*"commandcard_select_2nd"*/ )
  {
    v4 = sub_B52A44(StringLiteral_17735/*"commandcard_select_2nd"*/, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_21;
    v6 = StringLiteral_17735/*"commandcard_select_2nd"*/;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_20;
  v3->m_Items[1] = (System_String_o *)v6;
  sub_B52920(&v3->m_Items[1]);
  v4 = StringLiteral_17736/*"commandcard_select_3rd"*/;
  if ( StringLiteral_17736/*"commandcard_select_3rd"*/ )
  {
    v4 = sub_B52A44(StringLiteral_17736/*"commandcard_select_3rd"*/, v3->obj.klass->_1.element_class);
    if ( v4 )
    {
      v7 = StringLiteral_17736/*"commandcard_select_3rd"*/;
      goto LABEL_18;
    }
LABEL_21:
    v10 = sub_B52A7C();
    sub_B52A28(v10, 0LL);
  }
  v7 = 0LL;
LABEL_18:
  if ( v3->max_length <= 2 )
  {
LABEL_20:
    v9 = sub_B52A88(v4);
    sub_B52A28(v9, 0LL);
  }
  v3->m_Items[2] = (System_String_o *)v7;
  sub_B52920(&v3->m_Items[2]);
  static_fields = BattleSelectCommandComponent_TypeInfo->static_fields;
  static_fields->frameFileList = v3;
  sub_B52920(static_fields);
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
  UISprite_o *markSprite; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  __int64 v9; // x0

  if ( (byte_42AD5E3 & 1) == 0 )
  {
    sub_B52984(&BattleSelectCommandComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD5E3 = 1;
  }
  markSprite = this->fields.markSprite;
  gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  if ( (BYTE3(BattleSelectCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo);
    gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  }
  v7 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v7 )
    goto LABEL_18;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    v9 = sub_B52A88(gameObject);
    sub_B52A28(v9, 0LL);
  }
  if ( !markSprite )
    goto LABEL_18;
  UISprite__set_spriteName(markSprite, *(System_String_o **)(v7 + 8LL * index + 32), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UITweener__ResetToBeginning((UITweener_o *)Component_srcLineSprite, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
      return;
    }
LABEL_18:
    sub_B52A5C(gameObject, *(_QWORD *)&index);
  }
}