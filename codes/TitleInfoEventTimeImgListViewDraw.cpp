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
  __int64 v5; // x1
  System_String_o **v6; // x8

  if ( (byte_4AB4802 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_23979/*"time_status_icon_noon"*/, *(_QWORD *)&state);
    sub_1BAB41C(&StringLiteral_23978/*"time_status_icon_night"*/, v4);
    sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    byte_4AB4802 = 1;
  }
  if ( (state & 0xFFFFFFFE) == 2 )
    v6 = (System_String_o **)&StringLiteral_23978/*"time_status_icon_night"*/;
  else
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
  if ( (unsigned int)state <= 1 )
    v6 = (System_String_o **)&StringLiteral_23979/*"time_status_icon_noon"*/;
  return *v6;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventTimeImgListViewDraw__GetLabelImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o **v6; // x8

  if ( (byte_4AB4803 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_23980/*"time_status_icon_story"*/, *(_QWORD *)&state);
    sub_1BAB41C(&StringLiteral_1/*""*/, v4);
    sub_1BAB41C(&StringLiteral_23976/*"time_status_icon_free"*/, v5);
    byte_4AB4803 = 1;
  }
  if ( (unsigned int)state > 3 )
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v6 = (System_String_o **)*(&off_45025E8 + state);
  return *v6;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4AB4801 & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_1BAB41C(&AtlasManager_TypeInfo, *(_QWORD *)&state);
    byte_4AB4801 = 1;
  }
  timeIcon = v4->fields.timeIcon;
  IconImageName = TitleInfoEventTimeImgListViewDraw__GetIconImageName(this, state, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
    sub_1BAB678(v8, v7);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}