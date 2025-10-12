void ScreenShot___ctor(ScreenShot_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C39A9D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12629/*"ScreenshotFolder"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39A9D = 1;
  }
  v5 = StringLiteral_12629/*"ScreenshotFolder"*/;
  this->fields.folder = (struct System_String_o *)StringLiteral_12629/*"ScreenshotFolder"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.folder, v5, v2, v3);
  this->fields.frameRate = 30;
  v6 = StringLiteral_1/*""*/;
  this->fields.realFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.realFolder, v6, v7, v8);
  this->fields.frameNumber = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScreenShot__Start(ScreenShot_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *v2; // x19
  int64_t sortValue0; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  v2 = (CGThumbnailListItem_o *)this;
  UnityEngine_Time__set_captureFramerate(this->fields.frameRate, 0);
  sortValue0 = v2->fields.sortValue0;
  v2->fields.sortValue1 = sortValue0;
  v2 = (CGThumbnailListItem_o *)((char *)v2 + 48);
  sub_1C32BC4(v2, sortValue0, v4, v5);
  System_IO_Directory__CreateDirectory((System_String_o *)v2->klass, 0);
}


void ScreenShot__Update(ScreenShot_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  Il2CppObject *realFolder; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t frameNumber; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C39A9C & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25148/*"{0}/s{1:D04}.png"*/);
    byte_4C39A9C = 1;
  }
  if ( UnityEngine_Time__get_time(0) > this->fields.waitTime )
  {
    realFolder = (Il2CppObject *)this->fields.realFolder;
    frameNumber = this->fields.frameNumber;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &frameNumber, v3, v4, v5, v6, v7, v8);
    v11 = System_String__Format_63559836((System_String_o *)StringLiteral_25148/*"{0}/s{1:D04}.png"*/, realFolder, v10, 0);
    ++this->fields.frameNumber;
    UnityEngine_ScreenCapture__CaptureScreenshot(v11, 0);
  }
}