void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B04DE9 & 1) == 0 )
  {
    sub_1BC3008(&BattleSelectCommandComponent_TypeInfo, v1);
    sub_1BC3008(&string___TypeInfo, v2);
    sub_1BC3008(&StringLiteral_18007/*"commandcard_select_3rd"*/, v3);
    sub_1BC3008(&StringLiteral_18006/*"commandcard_select_2nd"*/, v4);
    sub_1BC3008(&StringLiteral_18005/*"commandcard_select_1st"*/, v5);
    byte_4B04DE9 = 1;
  }
  v6 = sub_1BC30B0(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_1BC3264(0LL, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v11 = StringLiteral_18005/*"commandcard_select_1st"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_18005/*"commandcard_select_1st"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u)
    || (v13 = StringLiteral_18006/*"commandcard_select_2nd"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_18006/*"commandcard_select_2nd"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 40), v13, v8, v12),
        *(_DWORD *)(v10 + 24) <= 2u) )
  {
    sub_1BC326C(v6, v7, v8);
  }
  v15 = StringLiteral_18007/*"commandcard_select_3rd"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_18007/*"commandcard_select_3rd"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 48), v15, v8, v14);
  BattleSelectCommandComponent_TypeInfo->static_fields->frameFileList = (struct System_String_array *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleSelectCommandComponent_TypeInfo->static_fields, v10, v16, v17);
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
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *markSprite; // x21
  __int64 v9; // x8
  Il2CppObject *Component_object; // x19

  if ( (byte_4B04DE8 & 1) == 0 )
  {
    sub_1BC3008(&BattleSelectCommandComponent_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B04DE8 = 1;
  }
  gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  markSprite = this->fields.markSprite;
  if ( !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo);
    gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  }
  v9 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v9 )
    goto LABEL_16;
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)index )
    sub_1BC326C(gameObject, *(_QWORD *)&index, method);
  if ( !markSprite )
    goto LABEL_16;
  UISprite__set_spriteName(markSprite, *(System_String_o **)(v9 + 8LL * index + 32), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UITweener__ResetToBeginning((UITweener_o *)Component_object, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
      return;
    }
LABEL_16:
    sub_1BC3264(gameObject, *(_QWORD *)&index);
  }
}