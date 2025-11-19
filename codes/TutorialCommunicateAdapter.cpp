void TutorialCommunicateAdapter___ctor(
        TutorialCommunicateAdapter_o *this,
        System_Action_TutorialCommunicateAdapter__o *onGetRequest,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.onGetRequest = onGetRequest;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onGetRequest, (int32_t)onGetRequest, v5, v6);
}


void TutorialCommunicateAdapter__SendRequest(
        TutorialCommunicateAdapter_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5CDC & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_TutorialCommunicateAdapter___);
    byte_4CB5CDC = 1;
  }
  this->fields._EventTutorialEntity_k__BackingField = entity;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EventTutorialEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
  this->fields._IsPerformanceBusy_k__BackingField = 1;
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onGetRequest,
    (Il2CppObject *)this,
    (const MethodInfo_3085F64 *)Method_ActionExtensions_Call_TutorialCommunicateAdapter___);
}


void TutorialCommunicateAdapter__SendResponse(TutorialCommunicateAdapter_o *this, const MethodInfo *method)
{
  this->fields._IsPerformanceBusy_k__BackingField = 0;
}


EventTutorialEntity_o *TutorialCommunicateAdapter__get_EventTutorialEntity(
        TutorialCommunicateAdapter_o *this,
        const MethodInfo *method)
{
  return this->fields._EventTutorialEntity_k__BackingField;
}


bool TutorialCommunicateAdapter__get_IsPerformanceBusy(TutorialCommunicateAdapter_o *this, const MethodInfo *method)
{
  return this->fields._IsPerformanceBusy_k__BackingField;
}


void TutorialCommunicateAdapter__set_EventTutorialEntity(
        TutorialCommunicateAdapter_o *this,
        EventTutorialEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventTutorialEntity_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EventTutorialEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void TutorialCommunicateAdapter__set_IsPerformanceBusy(
        TutorialCommunicateAdapter_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPerformanceBusy_k__BackingField = value;
}