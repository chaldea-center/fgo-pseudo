void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x19
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B18CEA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSelectCommandComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_18350/*"commandcard_select_3rd"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_18349/*"commandcard_select_2nd"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_18348/*"commandcard_select_1st"*/, v9, v10);
    byte_4B18CEA = 1;
  }
  v11 = sub_1BCA888(string___TypeInfo, 3LL);
  if ( !v11 )
    sub_1BCAA3C(0LL, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24)
    || (v20 = StringLiteral_18348/*"commandcard_select_1st"*/,
        *(_QWORD *)(v11 + 32) = StringLiteral_18348/*"commandcard_select_1st"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), v20, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v19 + 24) <= 1u)
    || (v27 = StringLiteral_18349/*"commandcard_select_2nd"*/,
        *(_QWORD *)(v19 + 40) = StringLiteral_18349/*"commandcard_select_2nd"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 40), v27, v21, v22, v23, v24, v25, v26),
        *(_DWORD *)(v19 + 24) <= 2u) )
  {
    sub_1BCAA44(v11, v12);
  }
  v34 = StringLiteral_18350/*"commandcard_select_3rd"*/;
  *(_QWORD *)(v19 + 48) = StringLiteral_18350/*"commandcard_select_3rd"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 48), v34, v28, v29, v30, v31, v32, v33);
  BattleSelectCommandComponent_TypeInfo->static_fields->frameFileList = (struct System_String_array *)v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleSelectCommandComponent_TypeInfo->static_fields,
    v19,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *markSprite; // x21
  __int64 v11; // x8
  __int64 v12; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B18CE9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSelectCommandComponent_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18CE9 = 1;
  }
  gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  markSprite = this->fields.markSprite;
  if ( !BattleSelectCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandComponent_TypeInfo, *(_QWORD *)&index);
    gameObject = (UnityEngine_Component_o *)BattleSelectCommandComponent_TypeInfo;
  }
  v11 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v11 )
    goto LABEL_16;
  if ( *(_DWORD *)(v11 + 24) <= (unsigned int)index )
    sub_1BCAA44(gameObject, *(_QWORD *)&index);
  if ( !markSprite )
    goto LABEL_16;
  UISprite__set_spriteName(markSprite, *(System_String_o **)(v11 + 8LL * index + 32), 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.markSprite;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
    sub_1BCAA3C(gameObject, *(_QWORD *)&index);
  }
}