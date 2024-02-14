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

  svtFaceInfo = (UnityEngine_Component_o *)this->fields.svtFaceInfo;
  if ( !svtFaceInfo
    || (svtFaceInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtFaceInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtFaceInfo, 1, 0LL),
        (svtFaceInfo = (UnityEngine_Component_o *)this->fields.svtFaceInfo) == 0LL) )
  {
    sub_B0D97C(svtFaceInfo);
  }
  ServantFaceIconComponent__Set_29626568((ServantFaceIconComponent_o *)svtFaceInfo, usrSvtId, 0LL, 0LL, 0LL);
}