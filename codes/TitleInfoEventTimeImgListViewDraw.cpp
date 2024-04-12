void __fastcall TitleInfoEventTimeImgListViewDraw___ctor(
        TitleInfoEventTimeImgListViewDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall TitleInfoEventTimeImgListViewDraw__GetIconImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_42AE718 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22878/*"time_status_icon_noon"*/);
    sub_B52984(&StringLiteral_22877/*"time_status_icon_night"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE718 = 1;
  }
  if ( (unsigned int)state < 2 )
  {
    v4 = (System_String_o **)&StringLiteral_22878/*"time_status_icon_noon"*/;
  }
  else if ( (state & 0xFFFFFFFE) == 2 )
  {
    v4 = (System_String_o **)&StringLiteral_22877/*"time_status_icon_night"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v4;
}


System_String_o *__fastcall TitleInfoEventTimeImgListViewDraw__GetLabelImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_42AE719 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22879/*"time_status_icon_story"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_22875/*"time_status_icon_free"*/);
    byte_42AE719 = 1;
  }
  if ( (unsigned int)state > 3 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_3F0AFA0 + state);
  return *v4;
}


void __fastcall TitleInfoEventTimeImgListViewDraw__SetItem(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoEventTimeImgListViewDraw_o *v4; // x19
  UISprite_o *timeIcon; // x21
  System_String_o *IconImageName; // x22
  __int64 v7; // x1
  struct UISprite_o *v8; // x0
  TitleInfoEventTimeImgListViewDraw_o *v9; // x0
  UISprite_o *stateSprite; // x21
  const MethodInfo *v11; // x2
  System_String_o *LabelImageName; // x0

  v4 = this;
  if ( (byte_42AE717 & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_B52984(&AtlasManager_TypeInfo);
    byte_42AE717 = 1;
  }
  timeIcon = v4->fields.timeIcon;
  IconImageName = TitleInfoEventTimeImgListViewDraw__GetIconImageName(this, state, method);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(timeIcon, IconImageName, 0LL);
  v8 = v4->fields.timeIcon;
  if ( !v8
    || (v9 = (TitleInfoEventTimeImgListViewDraw_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
                                                      v8,
                                                      v8->klass->vtable._34_get_minWidth.methodPtr),
        stateSprite = v4->fields.stateSprite,
        LabelImageName = TitleInfoEventTimeImgListViewDraw__GetLabelImageName(v9, state, v11),
        AtlasManager__SetEventUI(stateSprite, LabelImageName, 0LL),
        (v8 = v4->fields.stateSprite) == 0LL) )
  {
    sub_B52A5C(v8, v7);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}