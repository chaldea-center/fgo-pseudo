void ExUICenterChild___ctor(ExUICenterChild_o *this, const MethodInfo *method)
{
  UICenterOnChild___ctor((UICenterOnChild_o *)this, 0);
}


void ExUICenterChild__Recenter(ExUICenterChild_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mScrollView; // x0

  UICenterOnChild__Recenter((UICenterOnChild_o *)this, 0);
  mScrollView = (UnityEngine_Component_o *)this->fields.mScrollView;
  if ( !mScrollView )
    goto LABEL_7;
  mScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mScrollView, 0);
  if ( !mScrollView )
    goto LABEL_7;
  if ( vabds_f32(
         COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mScrollView, 0)),
         this->fields.scrollPosX) > 10.0 )
  {
    mScrollView = (UnityEngine_Component_o *)this->fields.rootComp;
    if ( mScrollView )
    {
      EventRewardRootComponent__OnMoveSvt((EventRewardRootComponent_o *)mScrollView, 0, 0);
      return;
    }
LABEL_7:
    sub_1C372B4(mScrollView);
  }
}


void ExUICenterChild__SetScrollPosition(ExUICenterChild_o *this, float posX, const MethodInfo *method)
{
  this->fields.scrollPosX = posX;
}


float ExUICenterChild__get_scrollPostion(ExUICenterChild_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mScrollView; // x0
  float result; // s0

  mScrollView = (UnityEngine_Component_o *)this->fields.mScrollView;
  if ( !mScrollView
    || (mScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mScrollView, 0)) == 0 )
  {
    sub_1C372B4(mScrollView);
  }
  LODWORD(result) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mScrollView, 0);
  return result;
}