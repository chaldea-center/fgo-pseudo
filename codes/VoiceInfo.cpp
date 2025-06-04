void __fastcall VoiceInfo___ctor(VoiceInfo_o *this, const MethodInfo *method)
{
  VoiceInfo_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.isCanPlay = 0;
  v2->fields.overwriteName = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.overwriteName, 0, v3, v4);
  v2->fields.overwriteNameDefault = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.overwriteNameDefault, 0, v5, v6);
  v2->fields.servantVoiceConds = 0LL;
  v2 = (VoiceInfo_o *)((char *)v2 + 56);
  v2[-1].fields.servantVoiceConds = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)v2, 0, v7, v8);
}