void SetLimitCntInfoComponent___ctor(SetLimitCntInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SetLimitCntInfoComponent__setEnableOnImg(SetLimitCntInfoComponent_o *this, bool isOn, const MethodInfo *method)
{
  UnityEngine_Component_o *onImg; // x0

  onImg = (UnityEngine_Component_o *)this->fields.onImg;
  if ( !onImg || (onImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(onImg, 0)) == 0 )
    sub_1C3E7C0(onImg, isOn);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)onImg, isOn, 0);
}