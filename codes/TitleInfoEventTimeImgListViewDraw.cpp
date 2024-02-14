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

  if ( (byte_421306D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22764/*"time_status_icon_noon"*/, *(_QWORD *)&state);
    sub_B0D8A4(&StringLiteral_22763/*"time_status_icon_night"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421306D = 1;
  }
  if ( (unsigned int)state < 2 )
  {
    v6 = (System_String_o **)&StringLiteral_22764/*"time_status_icon_noon"*/;
  }
  else if ( (state & 0xFFFFFFFE) == 2 )
  {
    v6 = (System_String_o **)&StringLiteral_22763/*"time_status_icon_night"*/;
  }
  else
  {
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
  }
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

  if ( (byte_421306E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22765/*"time_status_icon_story"*/, *(_QWORD *)&state);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    sub_B0D8A4(&StringLiteral_22761/*"time_status_icon_free"*/, v5);
    byte_421306E = 1;
  }
  if ( (unsigned int)state > 3 )
    v6 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v6 = (System_String_o **)*(&off_3E6ECA0 + state);
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
  struct UISprite_o *v7; // x0
  TitleInfoEventTimeImgListViewDraw_o *v8; // x0
  UISprite_o *stateSprite; // x21
  const MethodInfo *v10; // x2
  System_String_o *LabelImageName; // x0

  v4 = this;
  if ( (byte_421306C & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&state);
    byte_421306C = 1;
  }
  timeIcon = v4->fields.timeIcon;
  IconImageName = TitleInfoEventTimeImgListViewDraw__GetIconImageName(this, state, method);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(timeIcon, IconImageName, 0LL);
  v7 = v4->fields.timeIcon;
  if ( !v7
    || (v8 = (TitleInfoEventTimeImgListViewDraw_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
                                                      v7,
                                                      v7->klass->vtable._34_get_minWidth.methodPtr),
        stateSprite = v4->fields.stateSprite,
        LabelImageName = TitleInfoEventTimeImgListViewDraw__GetLabelImageName(v8, state, v10),
        AtlasManager__SetEventUI(stateSprite, LabelImageName, 0LL),
        (v7 = v4->fields.stateSprite) == 0LL) )
  {
    sub_B0D97C(v7);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
    v7,
    v7->klass->vtable._34_get_minWidth.methodPtr);
}