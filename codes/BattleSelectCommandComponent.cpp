void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x19
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDF0F9 & 1) == 0 )
  {
    sub_1C21E38(&BattleSelectCommandComponent_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_18475/*"commandcard_select_3rd"*/);
    sub_1C21E38(&StringLiteral_18474/*"commandcard_select_2nd"*/);
    sub_1C21E38(&StringLiteral_18473/*"commandcard_select_1st"*/);
    byte_4BDF0F9 = 1;
  }
  v1 = sub_1C21EE0(string___TypeInfo, 3LL);
  if ( !v1 )
    sub_1C22094(0LL, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v10 = StringLiteral_18473/*"commandcard_select_1st"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_18473/*"commandcard_select_1st"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8),
        *(_DWORD *)(v9 + 24) <= 1u)
    || (v17 = StringLiteral_18474/*"commandcard_select_2nd"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_18474/*"commandcard_select_2nd"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
    sub_1C2209C(v1, v2);
  }
  v24 = StringLiteral_18475/*"commandcard_select_3rd"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_18475/*"commandcard_select_3rd"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23);
  BattleSelectCommandComponent_TypeInfo->static_fields->frameFileList = (struct System_String_array *)v9;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleSelectCommandComponent_TypeInfo->static_fields,
    v9,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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

  if ( (byte_4BDF0F8 & 1) == 0 )
  {
    sub_1C21E38(&BattleSelectCommandComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF0F8 = 1;
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
    sub_1C2209C(gameObject, *(_QWORD *)&index);
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
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_1C22094(gameObject, *(_QWORD *)&index);
  }
}