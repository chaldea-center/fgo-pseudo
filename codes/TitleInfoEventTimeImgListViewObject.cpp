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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4BB314D & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___, *(_QWORD *)&state);
    byte_4BB314D = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewDraw___),
        this->fields.itemDraw = (struct TitleInfoEventTimeImgListViewDraw_o *)Component_object,
        p_itemDraw = &this->fields.itemDraw,
        sub_1C13CC8((PartyOrganizationUtility_o *)p_itemDraw, (int64_t)Component_object, v8, v9, v10, v11, v12, v13),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0LL) )
  {
    sub_1C13F80(dispObject, *(_QWORD *)&state);
  }
  TitleInfoEventTimeImgListViewDraw__SetItem((TitleInfoEventTimeImgListViewDraw_o *)dispObject, state, v14);
}