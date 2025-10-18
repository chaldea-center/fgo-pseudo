void GenderSelectControl___ctor(GenderSelectControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t GenderSelectControl__getGenderType(GenderSelectControl_o *this, const MethodInfo *method)
{
  return this->fields.genderType;
}


int32_t GenderSelectControl__getIdx(GenderSelectControl_o *this, const MethodInfo *method)
{
  return this->fields.idx;
}


void GenderSelectControl__setEnableGenderImg(GenderSelectControl_o *this, bool isShow, const MethodInfo *method)
{
  UnityEngine_Component_o *genderImg; // x0

  genderImg = (UnityEngine_Component_o *)this->fields.genderImg;
  if ( !genderImg || (genderImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(genderImg, 0)) == 0 )
    sub_1C372B4(genderImg);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)genderImg, isShow, 0);
}


void GenderSelectControl__setIdx(GenderSelectControl_o *this, int32_t childIdx, const MethodInfo *method)
{
  this->fields.idx = childIdx;
}