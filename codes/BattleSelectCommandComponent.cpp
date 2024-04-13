void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_String_array *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct BattleSelectCommandComponent_StaticFields *static_fields; // x0
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_42E579E & 1) == 0 )
  {
    sub_B5D5C4(&BattleSelectCommandComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_17830/*"commandcard_select_3rd"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_17829/*"commandcard_select_2nd"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_17828/*"commandcard_select_1st"*/, v13, v14, v15);
    byte_42E579E = 1;
  }
  v16 = sub_B5D5DC(string___TypeInfo, 3LL);
  if ( !v16 )
    sub_B5D69C(0LL, v17);
  v18 = (struct System_String_array *)v16;
  v19 = StringLiteral_17828/*"commandcard_select_1st"*/;
  if ( StringLiteral_17828/*"commandcard_select_1st"*/ )
  {
    v19 = sub_B5D684(StringLiteral_17828/*"commandcard_select_1st"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_21;
    v20 = StringLiteral_17828/*"commandcard_select_1st"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v18->max_length )
    goto LABEL_20;
  v18->m_Items[0] = (System_String_o *)v20;
  sub_B5D560(v18->m_Items);
  v19 = StringLiteral_17829/*"commandcard_select_2nd"*/;
  if ( StringLiteral_17829/*"commandcard_select_2nd"*/ )
  {
    v19 = sub_B5D684(StringLiteral_17829/*"commandcard_select_2nd"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_21;
    v21 = StringLiteral_17829/*"commandcard_select_2nd"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_20;
  v18->m_Items[1] = (System_String_o *)v21;
  sub_B5D560(&v18->m_Items[1]);
  v19 = StringLiteral_17830/*"commandcard_select_3rd"*/;
  if ( StringLiteral_17830/*"commandcard_select_3rd"*/ )
  {
    v19 = sub_B5D684(StringLiteral_17830/*"commandcard_select_3rd"*/, v18->obj.klass->_1.element_class);
    if ( v19 )
    {
      v22 = StringLiteral_17830/*"commandcard_select_3rd"*/;
      goto LABEL_18;
    }
LABEL_21:
    v25 = sub_B5D6BC();
    sub_B5D668(v25, 0LL);
  }
  v22 = 0LL;
LABEL_18:
  if ( v18->max_length <= 2 )
  {
LABEL_20:
    v24 = sub_B5D6C8(v19);
    sub_B5D668(v24, 0LL);
  }
  v18->m_Items[2] = (System_String_o *)v22;
  sub_B5D560(&v18->m_Items[2]);
  static_fields = BattleSelectCommandComponent_TypeInfo->static_fields;
  static_fields->frameFileList = v18;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UISprite_o *markSprite; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v14; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  __int64 v16; // x0

  if ( (byte_42E579D & 1) == 0 )
  {
    sub_B5D5C4(&BattleSelectCommandComponent_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E579D = 1;
  }
  markSprite = this->fields.markSprite;
  gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  if ( (BYTE3(BattleSelectCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo);
    gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  }
  v14 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v14 )
    goto LABEL_18;
  if ( *(_DWORD *)(v14 + 24) <= (unsigned int)index )
  {
    v16 = sub_B5D6C8(gameObject);
    sub_B5D668(v16, 0LL);
  }
  if ( !markSprite )
    goto LABEL_18;
  UISprite__set_spriteName(markSprite, *(System_String_o **)(v14 + 8LL * index + 32), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_B5D69C(gameObject, *(_QWORD *)&index);
  }
}