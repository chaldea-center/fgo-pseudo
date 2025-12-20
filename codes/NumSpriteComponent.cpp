void NumSpriteComponent___ctor(NumSpriteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NumSpriteComponent__SetSprite(
        NumSpriteComponent_o *this,
        int64_t number,
        System_String_o *baseName,
        System_Action_UISprite__string__o *setSprite,
        bool padding0,
        const MethodInfo *method)
{
  NumSpriteUtility__SetNumSprite(number, this->fields.numberSp, baseName, setSprite, padding0, method);
}


bool NumSpriteComponent__TryGetSpriteByIndex(
        NumSpriteComponent_o *this,
        UISprite_o **sprite,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct UISprite_array *numberSp; // x8
  int32_t max_length; // w21
  UISprite_o *v21; // x1

  *sprite = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)sprite, 0, index, (int32_t)method, v4, v5, v6, v7);
  numberSp = this->fields.numberSp;
  if ( !numberSp )
    sub_1C942F0(v11, v12);
  max_length = numberSp->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C942F8(v11);
    v21 = numberSp->m_Items[index];
    *sprite = v21;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)sprite, (int32_t)v21, v13, v14, v15, v16, v17, v18);
  }
  return max_length > index;
}