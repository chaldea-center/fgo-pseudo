void SupportInfoJump___ctor(
        SupportInfoJump_o *this,
        OtherUserGameEntity_o *entity,
        int32_t kind,
        bool isSelect,
        const MethodInfo *method)
{
  SupportInfoJump_o *v7; // x21
  bool v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v7 = this;
  v8 = isSelect;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7->fields.otherUserGameEntity = entity;
  v7 = (SupportInfoJump_o *)((char *)v7 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)v7, (int32_t)entity, v9, v10);
  LODWORD(v7->fields.returnSceneName) = kind;
  BYTE4(v7->fields.returnSceneName) = v8;
}


void SupportInfoJump___ctor_41575124(
        SupportInfoJump_o *this,
        FollowerInfo_o *followerInfo,
        int32_t kind,
        bool isSelect,
        const MethodInfo *method)
{
  SupportInfoJump_o *v7; // x21
  bool v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v7 = this;
  v8 = isSelect;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7->fields.followerInfo = followerInfo;
  v7 = (SupportInfoJump_o *)((char *)v7 + 32);
  sub_1C3E508((CGThumbnailListItem_o *)v7, (int32_t)followerInfo, v9, v10);
  LODWORD(v7->monitor) = kind;
  BYTE4(v7->monitor) = v8;
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

  if ( (byte_4C5677C & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C5677C = 1;
  }
  returnSceneName = this->fields.returnSceneName;
  if ( returnSceneName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v9);
    AvalonSceneManager__transitionScene_41207660(
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5677B & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C5677B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)Instance, 0);
  this->fields.returnSceneName = NowSceneName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)NowSceneName, v6, v7);
}


void SupportInfoJump__SetReturnScene(SupportInfoJump_o *this, int32_t type, const MethodInfo *method)
{
  struct System_String_o *SceneName; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5677A & 1) == 0 )
  {
    sub_1C3E564(&SceneList_TypeInfo);
    byte_4C5677A = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  this->fields.returnSceneName = SceneName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)SceneName, v6, v7);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventSetupInfo,
    (int32_t)questRestrictionInfo,
    method);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v6, v7);
}


EventUpValSetupInfo_o *SupportInfoJump__get_EventSetupInfo(SupportInfoJump_o *this, const MethodInfo *method)
{
  return this->fields.eventSetupInfo;
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