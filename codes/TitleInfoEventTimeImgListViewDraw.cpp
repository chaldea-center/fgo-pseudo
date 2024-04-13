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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o **v11; // x8

  if ( (byte_42E6C13 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22993/*"time_status_icon_noon"*/, state, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22992/*"time_status_icon_night"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E6C13 = 1;
  }
  if ( (unsigned int)state < 2 )
  {
    v11 = (System_String_o **)&StringLiteral_22993/*"time_status_icon_noon"*/;
  }
  else if ( (state & 0xFFFFFFFE) == 2 )
  {
    v11 = (System_String_o **)&StringLiteral_22992/*"time_status_icon_night"*/;
  }
  else
  {
    v11 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v11;
}


System_String_o *__fastcall TitleInfoEventTimeImgListViewDraw__GetLabelImageName(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o **v11; // x8

  if ( (byte_42E6C14 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22994/*"time_status_icon_story"*/, state, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22990/*"time_status_icon_free"*/, v8, v9, v10);
    byte_42E6C14 = 1;
  }
  if ( (unsigned int)state > 3 )
    v11 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v11 = (System_String_o **)*(&off_3F3FB20 + state);
  return *v11;
}


void __fastcall TitleInfoEventTimeImgListViewDraw__SetItem(
        TitleInfoEventTimeImgListViewDraw_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TitleInfoEventTimeImgListViewDraw_o *v5; // x19
  UISprite_o *timeIcon; // x21
  System_String_o *IconImageName; // x22
  __int64 v8; // x1
  struct UISprite_o *v9; // x0
  TitleInfoEventTimeImgListViewDraw_o *v10; // x0
  UISprite_o *stateSprite; // x21
  const MethodInfo *v12; // x2
  System_String_o *LabelImageName; // x0

  v5 = this;
  if ( (byte_42E6C12 & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_B5D5C4(&AtlasManager_TypeInfo, state, (_DWORD)method, v3);
    byte_42E6C12 = 1;
  }
  timeIcon = v5->fields.timeIcon;
  IconImageName = TitleInfoEventTimeImgListViewDraw__GetIconImageName(this, state, method);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(timeIcon, IconImageName, 0LL);
  v9 = v5->fields.timeIcon;
  if ( !v9
    || (v10 = (TitleInfoEventTimeImgListViewDraw_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
                                                       v9,
                                                       v9->klass->vtable._34_get_minWidth.methodPtr),
        stateSprite = v5->fields.stateSprite,
        LabelImageName = TitleInfoEventTimeImgListViewDraw__GetLabelImageName(v10, state, v12),
        AtlasManager__SetEventUI(stateSprite, LabelImageName, 0LL),
        (v9 = v5->fields.stateSprite) == 0LL) )
  {
    sub_B5D69C(v9, v8);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
    v9,
    v9->klass->vtable._34_get_minWidth.methodPtr);
}