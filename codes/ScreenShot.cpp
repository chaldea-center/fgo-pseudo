void ScreenShot___ctor(ScreenShot_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593A7D4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13132/*"ScreenshotFolder"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A7D4 = 1;
  }
  v9 = StringLiteral_13132/*"ScreenshotFolder"*/;
  this->fields.folder = (struct System_String_o *)StringLiteral_13132/*"ScreenshotFolder"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.folder, v9, v2, v3, v4, v5, v6, v7);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.frameRate = 30;
  this->fields.realFolder = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.realFolder, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.frameNumber = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScreenShot__Start(ScreenShot_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v2; // x19
  int64_t sortValue0; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  v2 = (MissionNaviTransitionBoardItem_o *)this;
  UnityEngine_Time__set_captureFramerate(this->fields.frameRate, 0);
  sortValue0 = v2->fields.sortValue0;
  v2->fields.sortValue1 = sortValue0;
  v2 = (MissionNaviTransitionBoardItem_o *)((char *)v2 + 48);
  sub_21FFBF4(v2, sortValue0, v4, v5, v6, v7, v8, v9);
  System_IO_Directory__CreateDirectory((System_String_o *)v2->klass, 0);
}


void ScreenShot__Update(ScreenShot_o *this, const MethodInfo *method)
{
  Il2CppObject *realFolder; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t frameNumber; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593A7D3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26494/*"{0}/s{1:D04}.png"*/);
    byte_593A7D3 = 1;
  }
  if ( UnityEngine_Time__get_time(0) > this->fields.waitTime )
  {
    realFolder = (Il2CppObject *)this->fields.realFolder;
    frameNumber = this->fields.frameNumber;
    v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &frameNumber);
    v5 = System_String__Format_75484576((System_String_o *)StringLiteral_26494/*"{0}/s{1:D04}.png"*/, realFolder, v4, 0);
    ++this->fields.frameNumber;
    UnityEngine_ScreenCapture__CaptureScreenshot(v5, 0);
  }
}