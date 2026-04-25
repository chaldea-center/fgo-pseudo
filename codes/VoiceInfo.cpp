void VoiceInfo___ctor(VoiceInfo_o *this, const MethodInfo *method)
{
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isCanPlay = 0;
  this->fields.overwriteName = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.overwriteName, 0, v3, v4, v5, v6, v7, v8);
  this->fields.overwriteNameDefault = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.overwriteNameDefault, 0, v9, v10, v11, v12, v13, v14);
  this->fields.servantVoiceConds = 0;
  *(_QWORD *)&this->fields.overwritePriority = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.servantVoiceConds, 0, v15, v16, v17, v18, v19, v20);
  this->fields.sync = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.sync, 0, v21, v22, v23, v24, v25, v26);
}


bool VoiceInfo__TryGetSyncServantId(VoiceInfo_o *this, int32_t *syncSvtId, const MethodInfo *method)
{
  struct ServantVoiceSync_array *sync; // x8
  il2cpp_array_size_t max_length; // x9
  bool result; // w0

  sync = this->fields.sync;
  if ( !sync )
    goto LABEL_7;
  max_length = sync->max_length;
  if ( !max_length )
  {
    LODWORD(sync) = 0;
LABEL_7:
    result = 0;
    goto LABEL_8;
  }
  if ( !(_DWORD)max_length )
    sub_1CE6960(this);
  sync = (struct ServantVoiceSync_array *)sync->m_Items[0];
  if ( !sync )
    sub_1CE6958(this, syncSvtId);
  LODWORD(sync) = sync->bounds;
  result = 1;
LABEL_8:
  *syncSvtId = (int)sync;
  return result;
}