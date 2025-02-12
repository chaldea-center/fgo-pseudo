void __fastcall NumSpriteComponent___ctor(NumSpriteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NumSpriteComponent__SetSprite(
        NumSpriteComponent_o *this,
        int64_t number,
        System_String_o *baseName,
        System_Action_UISprite__string__o *setSprite,
        bool padding0,
        const MethodInfo *method)
{
  NumSpriteUtility__SetNumSprite(number, this->fields.numberSp, baseName, setSprite, padding0, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NumSpriteComponent__TryGetSpriteByIndex(
        NumSpriteComponent_o *this,
        UISprite_o **sprite,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UISprite_array *numberSp; // x8
  int32_t max_length; // w21
  UISprite_o *v21; // x1

  *sprite = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)sprite, 0LL, *(int64_t *)&index, (int32_t)method, v4, v5, v6, v7);
  numberSp = this->fields.numberSp;
  if ( !numberSp )
    sub_1C1AE30(v11, v12);
  max_length = numberSp->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C1AE38(v11, v12);
    v21 = numberSp->m_Items[index];
    *sprite = v21;
    sub_1C1AB78((PartyOrganizationUtility_o *)sprite, (int64_t)v21, v13, v14, v15, v16, v17, v18);
  }
  return max_length > index;
}