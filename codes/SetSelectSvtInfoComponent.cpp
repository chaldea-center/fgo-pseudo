void __fastcall SetSelectSvtInfoComponent___ctor(SetSelectSvtInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetSelectSvtInfoComponent__setSvtInfo(
        SetSelectSvtInfoComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *svtFaceInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantFaceIconComponent_o *v7; // x0

  svtFaceInfo = (UnityEngine_Component_o *)this->fields.svtFaceInfo;
  if ( !svtFaceInfo
    || (gameObject = UnityEngine_Component__get_gameObject(svtFaceInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v7 = this->fields.svtFaceInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ServantFaceIconComponent__Set_30705604(v7, usrSvtId, 0LL, 0LL, 0LL);
}