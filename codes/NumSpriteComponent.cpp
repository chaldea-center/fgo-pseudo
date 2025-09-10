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
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  struct UISprite_array *numberSp; // x8
  int32_t max_length; // w21
  UISprite_o *v13; // x1

  *sprite = 0;
  sub_1C2D434((CGThumbnailListItem_o *)sprite, 0, index, method);
  numberSp = this->fields.numberSp;
  if ( !numberSp )
    sub_1C2D6EC(v7, v8);
  max_length = numberSp->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C2D6F4(v7, v8, v9);
    v13 = numberSp->m_Items[index];
    *sprite = v13;
    sub_1C2D434((CGThumbnailListItem_o *)sprite, (int32_t)v13, v9, v10);
  }
  return max_length > index;
}