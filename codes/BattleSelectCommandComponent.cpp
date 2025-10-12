void BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3A8BF & 1) == 0 )
  {
    sub_1C32C20(&BattleSelectCommandComponent_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_18168/*"commandcard_select_3rd"*/);
    sub_1C32C20(&StringLiteral_18167/*"commandcard_select_2nd"*/);
    sub_1C32C20(&StringLiteral_18166/*"commandcard_select_1st"*/);
    byte_4C3A8BF = 1;
  }
  v1 = sub_1C32CC8(string___TypeInfo, 3);
  if ( !v1 )
    sub_1C32E7C(0);
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v5 = StringLiteral_18166/*"commandcard_select_1st"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_18166/*"commandcard_select_1st"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3),
        *(_DWORD *)(v4 + 24) <= 1u)
    || (v8 = StringLiteral_18167/*"commandcard_select_2nd"*/,
        *(_QWORD *)(v4 + 40) = StringLiteral_18167/*"commandcard_select_2nd"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7),
        *(_DWORD *)(v4 + 24) <= 2u) )
  {
    sub_1C32E84(v1);
  }
  v11 = StringLiteral_18168/*"commandcard_select_3rd"*/;
  *(_QWORD *)(v4 + 48) = StringLiteral_18168/*"commandcard_select_3rd"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 48), v11, v9, v10);
  BattleSelectCommandComponent_TypeInfo->static_fields->frameFileList = (struct System_String_array *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleSelectCommandComponent_TypeInfo->static_fields, v4, v12, v13);
}


void BattleSelectCommandComponent___ctor(BattleSelectCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleSelectCommandComponent__setIndex(
        BattleSelectCommandComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *markSprite; // x21
  __int64 v7; // x8
  Il2CppObject *Component_object; // x19

  if ( (byte_4C3A8BE & 1) == 0 )
  {
    sub_1C32C20(&BattleSelectCommandComponent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A8BE = 1;
  }
  gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  markSprite = this->fields.markSprite;
  if ( !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo);
    gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  }
  v7 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v7 )
    goto LABEL_16;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
    sub_1C32E84(gameObject);
  if ( !markSprite )
    goto LABEL_16;
  UISprite__set_spriteName(markSprite, *(System_String_o **)(v7 + 8LL * index + 32), 0);
  gameObject = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UITweener__ResetToBeginning((UITweener_o *)Component_object, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
      return;
    }
LABEL_16:
    sub_1C32E7C(gameObject);
  }
}