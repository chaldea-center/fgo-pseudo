void VoiceInfo___ctor(VoiceInfo_o *this, const MethodInfo *method)
{
  VoiceInfo_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.isCanPlay = 0;
  v2->fields.overwriteName = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.overwriteName, 0, v3, v4, v5, v6, v7, v8);
  v2->fields.overwriteNameDefault = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.overwriteNameDefault, 0, v9, v10, v11, v12, v13, v14);
  v2->fields.servantVoiceConds = 0;
  v2 = (VoiceInfo_o *)((char *)v2 + 56);
  v2[-1].fields.servantVoiceConds = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v2, 0, v15, v16, v17, v18, v19, v20);
}