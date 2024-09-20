void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5DB12 & 1) == 0 )
  {
    sub_1B885B0(&BattleSelectCommandComponent_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_18166/*"commandcard_select_3rd"*/);
    sub_1B885B0(&StringLiteral_18165/*"commandcard_select_2nd"*/);
    sub_1B885B0(&StringLiteral_18164/*"commandcard_select_1st"*/);
    byte_4A5DB12 = 1;
  }
  v1 = sub_1B88658(string___TypeInfo, 3LL);
  if ( !v1 )
    sub_1B8880C(0LL, v2);
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v6 = StringLiteral_18164/*"commandcard_select_1st"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_18164/*"commandcard_select_1st"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 32), v6, v3, v4),
        *(_DWORD *)(v5 + 24) <= 1u)
    || (v9 = StringLiteral_18165/*"commandcard_select_2nd"*/,
        *(_QWORD *)(v5 + 40) = StringLiteral_18165/*"commandcard_select_2nd"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v9, v7, v8),
        *(_DWORD *)(v5 + 24) <= 2u) )
  {
    sub_1B88814(v1, v2);
  }
  v12 = StringLiteral_18166/*"commandcard_select_3rd"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_18166/*"commandcard_select_3rd"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), v12, v10, v11);
  BattleSelectCommandComponent_TypeInfo->static_fields->frameFileList = (struct System_String_array *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleSelectCommandComponent_TypeInfo->static_fields, v5, v13, v14);
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
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *markSprite; // x21
  __int64 v7; // x8
  Il2CppObject *Component_object; // x19

  if ( (byte_4A5DB11 & 1) == 0 )
  {
    sub_1B885B0(&BattleSelectCommandComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DB11 = 1;
  }
  gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  markSprite = this->fields.markSprite;
  if ( !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo);
    gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  }
  v7 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v7 )
    goto LABEL_16;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
    sub_1B88814(gameObject, *(_QWORD *)&index);
  if ( !markSprite )
    goto LABEL_16;
  UISprite__set_spriteName(markSprite, *(System_String_o **)(v7 + 8LL * index + 32), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_1B8880C(gameObject, *(_QWORD *)&index);
  }
}