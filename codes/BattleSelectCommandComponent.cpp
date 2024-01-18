void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_array *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleSelectCommandComponent_StaticFields *static_fields; // x0
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_4184E1D & 1) == 0 )
  {
    sub_B2C35C(&BattleSelectCommandComponent_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v2);
    sub_B2C35C(&StringLiteral_17611/*"commandcard_select_3rd"*/, v3);
    sub_B2C35C(&StringLiteral_17610/*"commandcard_select_2nd"*/, v4);
    sub_B2C35C(&StringLiteral_17609/*"commandcard_select_1st"*/, v5);
    byte_4184E1D = 1;
  }
  v6 = sub_B2C374(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_B2C434(0LL, v7);
  v8 = (struct System_String_array *)v6;
  v9 = StringLiteral_17609/*"commandcard_select_1st"*/;
  if ( StringLiteral_17609/*"commandcard_select_1st"*/ )
  {
    v9 = sub_B2C41C(StringLiteral_17609/*"commandcard_select_1st"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_21;
    v10 = StringLiteral_17609/*"commandcard_select_1st"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v8->max_length )
    goto LABEL_20;
  v8->m_Items[0] = (System_String_o *)v10;
  sub_B2C2F8(v8->m_Items, v10);
  v9 = StringLiteral_17610/*"commandcard_select_2nd"*/;
  if ( StringLiteral_17610/*"commandcard_select_2nd"*/ )
  {
    v9 = sub_B2C41C(StringLiteral_17610/*"commandcard_select_2nd"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_21;
    v11 = StringLiteral_17610/*"commandcard_select_2nd"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_20;
  v8->m_Items[1] = (System_String_o *)v11;
  sub_B2C2F8(&v8->m_Items[1], v11);
  v9 = StringLiteral_17611/*"commandcard_select_3rd"*/;
  if ( StringLiteral_17611/*"commandcard_select_3rd"*/ )
  {
    v9 = sub_B2C41C(StringLiteral_17611/*"commandcard_select_3rd"*/, v8->obj.klass->_1.element_class);
    if ( v9 )
    {
      v12 = StringLiteral_17611/*"commandcard_select_3rd"*/;
      goto LABEL_18;
    }
LABEL_21:
    v15 = sub_B2C454();
    sub_B2C400(v15, 0LL);
  }
  v12 = 0LL;
LABEL_18:
  if ( v8->max_length <= 2 )
  {
LABEL_20:
    v14 = sub_B2C460(v9);
    sub_B2C400(v14, 0LL);
  }
  v8->m_Items[2] = (System_String_o *)v12;
  sub_B2C2F8(&v8->m_Items[2], v12);
  static_fields = BattleSelectCommandComponent_TypeInfo->static_fields;
  static_fields->frameFileList = v8;
  sub_B2C2F8(static_fields, v8);
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
  UnityEngine_Component_o *gameObject; // x0
  __int64 v9; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  __int64 v11; // x0

  if ( (byte_4184E1C & 1) == 0 )
  {
    sub_B2C35C(&BattleSelectCommandComponent_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4184E1C = 1;
  }
  markSprite = this->fields.markSprite;
  gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  if ( (BYTE3(BattleSelectCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo);
    gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  }
  v9 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v9 )
    goto LABEL_18;
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)index )
  {
    v11 = sub_B2C460(gameObject);
    sub_B2C400(v11, 0LL);
  }
  if ( !markSprite )
    goto LABEL_18;
  UISprite__set_spriteName(markSprite, *(System_String_o **)(v9 + 8LL * index + 32), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_B2C434(gameObject, *(_QWORD *)&index);
  }
}