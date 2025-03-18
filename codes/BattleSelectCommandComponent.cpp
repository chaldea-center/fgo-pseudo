void __fastcall BattleSelectCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x19
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4C24BAA & 1) == 0 )
  {
    sub_1C3B764(&BattleSelectCommandComponent_TypeInfo, v1);
    sub_1C3B764(&string___TypeInfo, v2);
    sub_1C3B764(&StringLiteral_18521/*"effect load failed. effectId = {0}"*/, v3);
    sub_1C3B764(&StringLiteral_18520/*"effect"*/, v4);
    sub_1C3B764(&StringLiteral_18519/*"ef_whitepoint"*/, v5);
    byte_4C24BAA = 1;
  }
  v6 = sub_1C3B80C(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_1C3B9C0(0LL, v7);
  v14 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v15 = StringLiteral_18519/*"ef_whitepoint"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_18519/*"ef_whitepoint"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 32), v15, v8, v9, v10, v11, v12, v13),
        *(_DWORD *)(v14 + 24) <= 1u)
    || (v22 = StringLiteral_18520/*"effect"*/,
        *(_QWORD *)(v14 + 40) = StringLiteral_18520/*"effect"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 40), v22, v16, v17, v18, v19, v20, v21),
        *(_DWORD *)(v14 + 24) <= 2u) )
  {
    sub_1C3B9C8(v6, v7);
  }
  v29 = StringLiteral_18521/*"effect load failed. effectId = {0}"*/;
  *(_QWORD *)(v14 + 48) = StringLiteral_18521/*"effect load failed. effectId = {0}"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 48), v29, v23, v24, v25, v26, v27, v28);
  BattleSelectCommandComponent_TypeInfo->static_fields->frameFileList = (struct System_String_array *)v14;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattleSelectCommandComponent_TypeInfo->static_fields,
    v14,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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

  if ( (byte_4C24BA9 & 1) == 0 )
  {
    sub_1C3B764(&BattleSelectCommandComponent_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C24BA9 = 1;
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
    sub_1C3B9C8(gameObject, *(_QWORD *)&index);
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
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
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
    sub_1C3B9C0(gameObject, *(_QWORD *)&index);
  }
}