void TutorialCommunicateAdapter___ctor(
        TutorialCommunicateAdapter_o *this,
        System_Action_TutorialCommunicateAdapter__o *onGetRequest,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.onGetRequest = onGetRequest;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onGetRequest,
    (int32_t)onGetRequest,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void TutorialCommunicateAdapter__SendRequest(
        TutorialCommunicateAdapter_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_T__o *onGetRequest; // x0
  const MethodInfo_36CDF5C *v11; // x2

  if ( (byte_5938093 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_TutorialCommunicateAdapter___);
    byte_5938093 = 1;
  }
  this->fields._EventTutorialEntity_k__BackingField = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventTutorialEntity_k__BackingField,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  onGetRequest = (System_Action_T__o *)this->fields.onGetRequest;
  v11 = (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_TutorialCommunicateAdapter___;
  this->fields._IsPerformanceBusy_k__BackingField = 1;
  ActionExtensions__Call_object_(onGetRequest, (Il2CppObject *)this, v11);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventTutorialEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventTutorialEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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