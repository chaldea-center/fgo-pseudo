void TutorialCommunicateAdapter___ctor(
        TutorialCommunicateAdapter_o *this,
        System_Action_TutorialCommunicateAdapter__o *onGetRequest,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.onGetRequest = onGetRequest;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onGetRequest, (int32_t)onGetRequest, v5, v6, v7, v8, v9, v10);
}


void TutorialCommunicateAdapter__SendRequest(
        TutorialCommunicateAdapter_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE0C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_TutorialCommunicateAdapter___);
    byte_4CEE0C7 = 1;
  }
  this->fields._EventTutorialEntity_k__BackingField = entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventTutorialEntity_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields._IsPerformanceBusy_k__BackingField = 1;
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onGetRequest,
    (Il2CppObject *)this,
    (const MethodInfo_30B9390 *)Method_ActionExtensions_Call_TutorialCommunicateAdapter___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventTutorialEntity_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventTutorialEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TutorialCommunicateAdapter__set_IsPerformanceBusy(
        TutorialCommunicateAdapter_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPerformanceBusy_k__BackingField = value;
}