void TitleInfoEventTimeImgListViewObject___ctor(TitleInfoEventTimeImgListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTimeImgListViewObject__Init(
        TitleInfoEventTimeImgListViewObject_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  struct TitleInfoEventTimeImgListViewDraw_o **p_itemDraw; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596F0FA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___);
    byte_596F0FA = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___),
        this->fields.itemDraw = (struct TitleInfoEventTimeImgListViewDraw_o *)Component_object,
        p_itemDraw = &this->fields.itemDraw,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p_itemDraw,
          (int32_t)Component_object,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0) )
  {
    sub_2213CDC(dispObject, *(_QWORD *)&state);
  }
  TitleInfoEventTimeImgListViewDraw__SetItem((TitleInfoEventTimeImgListViewDraw_o *)dispObject, state, v14);
}