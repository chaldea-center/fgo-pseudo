void __fastcall SelectBannerSliderIcon___ctor(SelectBannerSliderIcon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SelectBannerSliderIcon__setEnableOffImg(
        SelectBannerSliderIcon_o *this,
        bool isOff,
        const MethodInfo *method)
{
  UnityEngine_Component_o *offImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  offImg = (UnityEngine_Component_o *)this->fields.offImg;
  if ( !offImg || (gameObject = UnityEngine_Component__get_gameObject(offImg, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isOff, 0LL);
}


void __fastcall SelectBannerSliderIcon__setEnableOnImg(
        SelectBannerSliderIcon_o *this,
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