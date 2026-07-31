void SupportInfoJump___ctor(
        SupportInfoJump_o *this,
        OtherUserGameEntity_o *entity,
        int32_t kind,
        bool isSelect,
        const MethodInfo *method)
{
  SupportInfoJump_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.otherUserGameEntity = entity;
  v8 = (SupportInfoJump_o *)((char *)v8 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)entity, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->fields.returnSceneName) = kind;
  BYTE4(v8->fields.returnSceneName) = isSelect;
}


void SupportInfoJump___ctor_48473488(
        SupportInfoJump_o *this,
        FollowerInfo_o *followerInfo,
        int32_t kind,
        bool isSelect,
        const MethodInfo *method)
{
  SupportInfoJump_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.followerInfo = followerInfo;
  v8 = (SupportInfoJump_o *)((char *)v8 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)followerInfo, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = kind;
  BYTE4(v8->monitor) = isSelect;
}


FollowerInfo_o *SupportInfoJump__GetFollowerInfo(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.followerInfo;
}


OtherUserGameEntity_o *SupportInfoJump__GetFriendInfo(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.otherUserGameEntity;
}


bool SupportInfoJump__IsEnableReturnScene(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.returnSceneName != 0;
}


bool SupportInfoJump__ReturnScene(SupportInfoJump_o *this, int32_t fade, Il2CppObject *data, const MethodInfo *method)
{
  struct System_String_o *returnSceneName; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_5938092 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5938092 = 1;
  }
  returnSceneName = this->fields.returnSceneName;
  if ( returnSceneName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v9);
    AvalonSceneManager__transitionScene_48092832(
      (AvalonSceneManager_o *)Instance,
      this->fields.returnSceneName,
      fade,
      data,
      0);
  }
  return returnSceneName != 0;
}


void SupportInfoJump__SetIsUseGrandSupport(SupportInfoJump_o *this, bool isUseGrandSupport, const MethodInfo *method)
{
  this->fields._IsUseGrandSupport_k__BackingField = isUseGrandSupport;
}


void SupportInfoJump__SetReturnNowScene(SupportInfoJump_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_String_o *NowSceneName; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5938091 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5938091 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)Instance, 0);
  this->fields.returnSceneName = NowSceneName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)NowSceneName, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void SupportInfoJump__SetReturnScene(SupportInfoJump_o *this, int32_t type, const MethodInfo *method)
{
  struct System_String_o *SceneName; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5938090 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5938090 = 1;
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0);
  this->fields.returnSceneName = SceneName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SceneName, v6, v7, v8, v9, v10, v11);
}


void SupportInfoJump__SetSelectClassId(SupportInfoJump_o *this, int32_t classId, const MethodInfo *method)
{
  this->fields.selectClassId = classId;
}


void SupportInfoJump__SetSetupInfo(
        SupportInfoJump_o *this,
        EventUpValSetupInfo_o *eventSetupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.eventSetupInfo = eventSetupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    (System_String_o *)questRestrictionInfo,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


EventUpValSetupInfo_o *SupportInfoJump__get_EventSetupInfo(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.eventSetupInfo;
}


bool SupportInfoJump__get_IsGrandRestriction(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandRestriction_k__BackingField;
}


bool SupportInfoJump__get_IsSelect(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.isSelect;
}


bool SupportInfoJump__get_IsUseGrandSupport(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields._IsUseGrandSupport_k__BackingField;
}


int32_t SupportInfoJump__get_Kind(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.kind;
}


QuestRestrictionInfo_o *SupportInfoJump__get_QuestRestriction(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t SupportInfoJump__get_SelectClassId(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.selectClassId;
}


int32_t SupportInfoJump__get_SelectDeckId(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.selectDeckId;
}


int32_t SupportInfoJump__get_SelectGrandGraphId(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields._SelectGrandGraphId_k__BackingField;
}


void SupportInfoJump__set_IsGrandRestriction(SupportInfoJump_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsGrandRestriction_k__BackingField = value;
}


void SupportInfoJump__set_IsUseGrandSupport(SupportInfoJump_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsUseGrandSupport_k__BackingField = value;
}


void SupportInfoJump__set_SelectDeckId(SupportInfoJump_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.selectDeckId = value;
}


void SupportInfoJump__set_SelectGrandGraphId(SupportInfoJump_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SelectGrandGraphId_k__BackingField = value;
}