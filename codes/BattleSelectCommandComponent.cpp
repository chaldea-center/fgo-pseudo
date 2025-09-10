void BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2A1AC & 1) == 0 )
  {
    sub_1C2D490(&BattleSelectCommandComponent_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_18164/*"commandcard_select_3rd"*/);
    sub_1C2D490(&StringLiteral_18163/*"commandcard_select_2nd"*/);
    sub_1C2D490(&StringLiteral_18162/*"commandcard_select_1st"*/);
    byte_4C2A1AC = 1;
  }
  v1 = sub_1C2D538(string___TypeInfo, 3);
  if ( !v1 )
    sub_1C2D6EC(0, v2);
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v6 = StringLiteral_18162/*"commandcard_select_1st"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_18162/*"commandcard_select_1st"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v6, v3, v4),
        *(_DWORD *)(v5 + 24) <= 1u)
    || (v8 = StringLiteral_18163/*"commandcard_select_2nd"*/,
        *(_QWORD *)(v5 + 40) = StringLiteral_18163/*"commandcard_select_2nd"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), v8, v3, v7),
        *(_DWORD *)(v5 + 24) <= 2u) )
  {
    sub_1C2D6F4(v1, v2, v3);
  }
  v10 = StringLiteral_18164/*"commandcard_select_3rd"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_18164/*"commandcard_select_3rd"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), v10, v3, v9);
  BattleSelectCommandComponent_TypeInfo->static_fields->frameFileList = (struct System_String_array *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)BattleSelectCommandComponent_TypeInfo->static_fields, v5, v11, v12);
}


void BattleSelectCommandComponent___ctor(BattleSelectCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectCommandComponent__setIndex(
        BattleSelectCommandComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *markSprite; // x21
  __int64 v7; // x8
  Il2CppObject *Component_object; // x19

  if ( (byte_4C2A1AB & 1) == 0 )
  {
    sub_1C2D490(&BattleSelectCommandComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A1AB = 1;
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
    sub_1C2D6F4(gameObject, *(_QWORD *)&index, method);
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
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_1C2D6EC(gameObject, *(_QWORD *)&index);
  }
}