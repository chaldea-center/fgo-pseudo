void ScreenShot___ctor(ScreenShot_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC9516 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12640/*"ScreenshotFolder"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9516 = 1;
  }
  v9 = StringLiteral_12640/*"ScreenshotFolder"*/;
  this->fields.folder = (struct System_String_o *)StringLiteral_12640/*"ScreenshotFolder"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.folder, v9, v2, v3, v4, v5, v6, v7);
  this->fields.frameRate = 30;
  v10 = StringLiteral_1/*""*/;
  this->fields.realFolder = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.realFolder, v10, v11, v12, v13, v14, v15, v16);
  this->fields.frameNumber = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScreenShot__Start(ScreenShot_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v2; // x19
  int64_t sortValue0; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  v2 = (GrandQuestFolderBoardItem_o *)this;
  UnityEngine_Time__set_captureFramerate(this->fields.frameRate, 0);
  sortValue0 = v2->fields.sortValue0;
  v2->fields.sortValue1 = sortValue0;
  v2 = (GrandQuestFolderBoardItem_o *)((char *)v2 + 48);
  sub_1C71354(v2, sortValue0, v4, v5, v6, v7, v8, v9);
  System_IO_Directory__CreateDirectory((System_String_o *)v2->klass, 0);
}


void ScreenShot__Update(ScreenShot_o *this, const MethodInfo *method)
{
  Il2CppObject *realFolder; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t frameNumber; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC9515 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25283/*"{0}/s{1:D04}.png"*/);
    byte_4CC9515 = 1;
  }
  if ( UnityEngine_Time__get_time(0) > this->fields.waitTime )
  {
    realFolder = (Il2CppObject *)this->fields.realFolder;
    frameNumber = this->fields.frameNumber;
    v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &frameNumber);
    v5 = System_String__Format_64073032((System_String_o *)StringLiteral_25283/*"{0}/s{1:D04}.png"*/, realFolder, v4, 0);
    ++this->fields.frameNumber;
    UnityEngine_ScreenCapture__CaptureScreenshot(v5, 0);
  }
}