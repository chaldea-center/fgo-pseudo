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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4D2F343 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___);
    byte_4D2F343 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___),
        this->fields.itemDraw = (struct TitleInfoEventTimeImgListViewDraw_o *)Component_object,
        p_itemDraw = &this->fields.itemDraw,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)p_itemDraw, (int32_t)Component_object, v8, v9, v10, v11, v12, v13),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0) )
  {
    sub_1C93D2C(dispObject, *(_QWORD *)&state);
  }
  TitleInfoEventTimeImgListViewDraw__SetItem((TitleInfoEventTimeImgListViewDraw_o *)dispObject, state, v14);
}