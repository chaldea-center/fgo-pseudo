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


// local variable allocation has failed, the output may be wrong!
bool NumSpriteComponent__TryGetSpriteByIndex(
        NumSpriteComponent_o *this,
        UISprite_o **sprite,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UISprite_array *numberSp; // x8
  int32_t max_length; // w21
  UISprite_o *v21; // x1

  *sprite = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)sprite,
    0,
    *(System_String_o **)&index,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  numberSp = this->fields.numberSp;
  if ( !numberSp )
    sub_2213CDC(v11, v12);
  max_length = numberSp->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_2213CE4(v11);
    v21 = numberSp->m_Items[index];
    *sprite = v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)sprite, (int32_t)v21, v13, v14, v15, v16, v17, v18);
  }
  return max_length > index;
}