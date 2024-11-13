void __fastcall TitleInfoEventTimeImgListViewDraw___ctor(
        TitleInfoEventTimeImgListViewDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventTimeImgListViewDraw__GetIconImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o **v8; // x8

  if ( (byte_4B14C88 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24189/*"time_status_icon_noon"*/, *(_QWORD *)&state, method);
    sub_1BCA7E0(&StringLiteral_24188/*"time_status_icon_night"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B14C88 = 1;
  }
  if ( (state & 0xFFFFFFFE) == 2 )
    v8 = (System_String_o **)&StringLiteral_24188/*"time_status_icon_night"*/;
  else
    v8 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( (unsigned int)state <= 1 )
    v8 = (System_String_o **)&StringLiteral_24189/*"time_status_icon_noon"*/;
  return *v8;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventTimeImgListViewDraw__GetLabelImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o **v8; // x8

  if ( (byte_4B14C89 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24190/*"time_status_icon_story"*/, *(_QWORD *)&state, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_24186/*"time_status_icon_free"*/, v6, v7);
    byte_4B14C89 = 1;
  }
  if ( (unsigned int)state > 3 )
    v8 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v8 = (System_String_o **)*(&off_455AF08 + state);
  return *v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeImgListViewDraw__SetItem(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  TitleInfoEventTimeImgListViewDraw_o *v4; // x19
  UISprite_o *timeIcon; // x21
  __int64 v6; // x1
  System_String_o *IconImageName; // x22
  __int64 v8; // x1
  struct UISprite_o *v9; // x0
  TitleInfoEventTimeImgListViewDraw_o *v10; // x0
  UISprite_o *stateSprite; // x21
  const MethodInfo *v12; // x2
  System_String_o *LabelImageName; // x0

  v4 = this;
  if ( (byte_4B14C87 & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&state, method);
    byte_4B14C87 = 1;
  }
  timeIcon = v4->fields.timeIcon;
  IconImageName = TitleInfoEventTimeImgListViewDraw__GetIconImageName(this, state, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
  AtlasManager__SetEventUI(timeIcon, IconImageName, 0LL);
  v9 = v4->fields.timeIcon;
  if ( !v9
    || (v10 = (TitleInfoEventTimeImgListViewDraw_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
                                                       v9,
                                                       v9->klass->vtable._34_get_minWidth.methodPtr),
        stateSprite = v4->fields.stateSprite,
        LabelImageName = TitleInfoEventTimeImgListViewDraw__GetLabelImageName(v10, state, v12),
        AtlasManager__SetEventUI(stateSprite, LabelImageName, 0LL),
        (v9 = v4->fields.stateSprite) == 0LL) )
  {
    sub_1BCAA3C(v9, v8);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
    v9,
    v9->klass->vtable._34_get_minWidth.methodPtr);
}