void SvtVoiceInfo___ctor(SvtVoiceInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SvtVoiceInfo__TryGetSyncServantId(SvtVoiceInfo_o *this, int32_t *syncSvtId, const MethodInfo *method)
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
    sub_21FFED4(this);
  sync = (struct ServantVoiceSync_array *)sync->m_Items[0];
  if ( !sync )
    sub_21FFECC(this, syncSvtId);
  LODWORD(sync) = sync->bounds;
  result = 1;
LABEL_8:
  *syncSvtId = (int)sync;
  return result;
}