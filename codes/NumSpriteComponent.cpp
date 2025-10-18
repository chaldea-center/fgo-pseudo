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
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UISprite_array *numberSp; // x8
  int32_t max_length; // w21
  UISprite_o *v12; // x1

  *sprite = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)sprite, 0, index, method);
  numberSp = this->fields.numberSp;
  if ( !numberSp )
    sub_1C372B4(v7);
  max_length = numberSp->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C372BC(v7);
    v12 = numberSp->m_Items[index];
    *sprite = v12;
    sub_1C36FFC((CGThumbnailListItem_o *)sprite, (int32_t)v12, v8, v9);
  }
  return max_length > index;
}