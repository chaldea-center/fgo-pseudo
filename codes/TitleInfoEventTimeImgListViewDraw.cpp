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

  if ( (byte_4C41928 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24081/*"time_status_icon_noon"*/);
    sub_1C37058(&StringLiteral_24080/*"time_status_icon_night"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41928 = 1;
  }
  if ( (state & 0xFFFFFFFE) == 2 )
    v4 = (System_String_o **)&StringLiteral_24080/*"time_status_icon_night"*/;
  else
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( (unsigned int)state <= 1 )
    v4 = (System_String_o **)&StringLiteral_24081/*"time_status_icon_noon"*/;
  return *v4;
}


System_String_o *TitleInfoEventTimeImgListViewDraw__GetLabelImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4C41929 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24082/*"time_status_icon_story"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_24078/*"time_status_icon_free"*/);
    byte_4C41929 = 1;
  }
  if ( (unsigned int)state > 3 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_466A878 + state);
  return *v4;
}


void TitleInfoEventTimeImgListViewDraw__SetItem(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoEventTimeImgListViewDraw_o *v4; // x19
  UISprite_o *timeIcon; // x21
  System_String_o *IconImageName; // x22
  struct UISprite_o *v7; // x0
  TitleInfoEventTimeImgListViewDraw_o *v8; // x0
  UISprite_o *stateSprite; // x21
  const MethodInfo *v10; // x2
  System_String_o *LabelImageName; // x0

  v4 = this;
  if ( (byte_4C41927 & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C41927 = 1;
  }
  timeIcon = v4->fields.timeIcon;
  IconImageName = TitleInfoEventTimeImgListViewDraw__GetIconImageName(this, state, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(timeIcon, IconImageName, 0);
  v7 = v4->fields.timeIcon;
  if ( !v7
    || (v8 = (TitleInfoEventTimeImgListViewDraw_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                      v7,
                                                      v7->klass->vtable._33_MakePixelPerfect.method),
        stateSprite = v4->fields.stateSprite,
        LabelImageName = TitleInfoEventTimeImgListViewDraw__GetLabelImageName(v8, state, v10),
        AtlasManager__SetEventUI(stateSprite, LabelImageName, 0),
        (v7 = v4->fields.stateSprite) == 0) )
  {
    sub_1C372B4(v7);
  }
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v7,
    v7->klass->vtable._33_MakePixelPerfect.method);
}