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
  struct TitleInfoEventTimeImgListViewDraw_o *Component_srcLineSprite; // x0
  struct TitleInfoEventTimeImgListViewDraw_o **p_itemDraw; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_418638D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___, *(_QWORD *)&state);
    byte_418638D = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct TitleInfoEventTimeImgListViewDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  dispObject,
                                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        p_itemDraw = &this->fields.itemDraw,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)p_itemDraw,
          (System_Int32_array **)Component_srcLineSprite,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0LL) )
  {
    sub_B2C434(dispObject, *(_QWORD *)&state);
  }
  TitleInfoEventTimeImgListViewDraw__SetItem((TitleInfoEventTimeImgListViewDraw_o *)dispObject, state, v14);
}