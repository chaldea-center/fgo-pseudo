void VoiceInfo___ctor(VoiceInfo_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isCanPlay = 0;
  this->fields.overwriteName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteName, 0, v3, v4, v5, v6, v7, v8);
  this->fields.overwriteNameDefault = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteNameDefault, 0, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)&this->fields.overwritePriority = 0;
  this->fields.servantVoiceConds = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantVoiceConds, 0, v15, v16, v17, v18, v19, v20);
  this->fields.sync = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sync, 0, v21, v22, v23, v24, v25, v26);
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
    sub_2213CE4(this);
  sync = (struct ServantVoiceSync_array *)sync->m_Items[0];
  if ( !sync )
    sub_2213CDC(this, syncSvtId);
  LODWORD(sync) = sync->bounds;
  result = 1;
LABEL_8:
  *syncSvtId = (int)sync;
  return result;
}