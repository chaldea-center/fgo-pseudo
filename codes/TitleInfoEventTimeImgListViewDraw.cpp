void TitleInfoEventTimeImgListViewDraw___ctor(TitleInfoEventTimeImgListViewDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *TitleInfoEventTimeImgListViewDraw__GetIconImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_5936F9E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25328/*"time_status_icon_noon"*/);
    sub_21FFC50(&StringLiteral_25327/*"time_status_icon_night"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5936F9E = 1;
  }
  if ( (state & 0xFFFFFFFE) == 2 )
    v4 = (System_String_o **)&StringLiteral_25327/*"time_status_icon_night"*/;
  else
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( (unsigned int)state <= 1 )
    v4 = (System_String_o **)&StringLiteral_25328/*"time_status_icon_noon"*/;
  return *v4;
}


System_String_o *TitleInfoEventTimeImgListViewDraw__GetLabelImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_5936F9F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25329/*"time_status_icon_story"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_25325/*"time_status_icon_free"*/);
    byte_5936F9F = 1;
  }
  if ( (unsigned int)state > 3 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_52966D0 + (unsigned int)state);
  return *v4;
}


void TitleInfoEventTimeImgListViewDraw__SetItem(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoEventTimeImgListViewDraw_o *v4; // x19
  UISprite_o *timeIcon; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *IconImageName; // x22
  __int64 v9; // x1
  struct UISprite_o *v10; // x0
  TitleInfoEventTimeImgListViewDraw_o *v11; // x0
  UISprite_o *stateSprite; // x21
  const MethodInfo *v13; // x2
  System_String_o *LabelImageName; // x0

  v4 = this;
  if ( (byte_5936F9D & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5936F9D = 1;
  }
  timeIcon = v4->fields.timeIcon;
  IconImageName = TitleInfoEventTimeImgListViewDraw__GetIconImageName(this, state, method);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetEventUI(timeIcon, IconImageName, 0);
  v10 = v4->fields.timeIcon;
  if ( !v10
    || (v11 = (TitleInfoEventTimeImgListViewDraw_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v10->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                       v10,
                                                       v10->klass->vtable._33_MakePixelPerfect.method),
        stateSprite = v4->fields.stateSprite,
        LabelImageName = TitleInfoEventTimeImgListViewDraw__GetLabelImageName(v11, state, v13),
        AtlasManager__SetEventUI(stateSprite, LabelImageName, 0),
        (v10 = v4->fields.stateSprite) == 0) )
  {
    sub_21FFECC(v10, v9);
  }
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v10->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v10,
    v10->klass->vtable._33_MakePixelPerfect.method);
}