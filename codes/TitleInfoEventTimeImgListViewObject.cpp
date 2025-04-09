void __fastcall TitleInfoEventTimeImgListViewObject___ctor(
        TitleInfoEventTimeImgListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeImgListViewObject__Init(
        TitleInfoEventTimeImgListViewObject_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  struct TitleInfoEventTimeImgListViewDraw_o **p_itemDraw; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49B98CB & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___, *(_QWORD *)&state);
    byte_49B98CB = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___),
        this->fields.itemDraw = (struct TitleInfoEventTimeImgListViewDraw_o *)Component_object,
        p_itemDraw = &this->fields.itemDraw,
        sub_1B4CF34((CGThumbnailListItem_o *)p_itemDraw, (int32_t)Component_object, v8, v9),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0LL) )
  {
    sub_1B4D1EC(dispObject, *(_QWORD *)&state);
  }
  TitleInfoEventTimeImgListViewDraw__SetItem((TitleInfoEventTimeImgListViewDraw_o *)dispObject, state, v10);
}