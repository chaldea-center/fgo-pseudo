void __fastcall SetLimitCntInfoComponent___ctor(SetLimitCntInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetLimitCntInfoComponent__setEnableOnImg(
        SetLimitCntInfoComponent_o *this,
        bool isOn,
        const MethodInfo *method)
{
  UnityEngine_Component_o *onImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  onImg = (UnityEngine_Component_o *)this->fields.onImg;
  if ( !onImg || (gameObject = UnityEngine_Component__get_gameObject(onImg, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isOn, 0LL);
}