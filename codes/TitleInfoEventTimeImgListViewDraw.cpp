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

  if ( (byte_40F83DC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22595, *(_QWORD *)&state);
    sub_B16FFC(&StringLiteral_22594, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40F83DC = 1;
  }
  if ( (unsigned int)state < 2 )
  {
    v6 = (System_String_o **)&StringLiteral_22595;
  }
  else if ( (state & 0xFFFFFFFE) == 2 )
  {
    v6 = (System_String_o **)&StringLiteral_22594;
  }
  else
  {
    v6 = (System_String_o **)&StringLiteral_1;
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

  if ( (byte_40F83DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22596, *(_QWORD *)&state);
    sub_B16FFC(&StringLiteral_1, v4);
    sub_B16FFC(&StringLiteral_22592, v5);
    byte_40F83DD = 1;
  }
  if ( (unsigned int)state > 3 )
    v6 = (System_String_o **)&StringLiteral_1;
  else
    v6 = (System_String_o **)*(&off_3D6A720 + state);
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
  struct UISprite_o *v12; // x0

  v4 = this;
  if ( (byte_40F83DB & 1) == 0 )
  {
    this = (TitleInfoEventTimeImgListViewDraw_o *)sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&state);
    byte_40F83DB = 1;
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
        (v12 = v4->fields.stateSprite) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
    v12,
    v12->klass->vtable._34_get_minWidth.methodPtr);
}