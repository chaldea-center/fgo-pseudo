void FriendCodeComponent___ctor(FriendCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void FriendCodeComponent__Awake(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent__Setup(this, method);
}


// local variable allocation has failed, the output may be wrong!
void FriendCodeComponent__ChangeDispState(
        FriendCodeComponent_o *this,
        int32_t state,
        System_String_o *code,
        const MethodInfo *method)
{
  UILabel_o *v7; // x0
  const MethodInfo *v8; // x2
  bool v9; // w1
  struct UILabel_o *friendCodeLabel; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x1
  UILabel_o *v13; // x0
  struct UILabel_o *v14; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0

  if ( (byte_4CC9317 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_14853/*"USER_FRIEND_CODE"*/);
    sub_1C713B0(&StringLiteral_14854/*"USER_FRIEND_CODE_HIDDEN"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9317 = 1;
  }
  switch ( state )
  {
    case 2:
      friendCodeLabel = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_14853/*"USER_FRIEND_CODE"*/, 0);
      v7 = (UILabel_o *)System_String__Format(v11, (Il2CppObject *)code, 0);
      if ( !friendCodeLabel )
        goto LABEL_19;
      v12 = (System_String_o *)v7;
      v13 = friendCodeLabel;
LABEL_16:
      UILabel__set_text(v13, v12, 0);
      v9 = 1;
      goto LABEL_17;
    case 1:
      v14 = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14853/*"USER_FRIEND_CODE"*/, 0);
      v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_14854/*"USER_FRIEND_CODE_HIDDEN"*/, 0);
      v7 = (UILabel_o *)System_String__Format(v15, v16, 0);
      if ( !v14 )
        goto LABEL_19;
      v12 = (System_String_o *)v7;
      v13 = v14;
      goto LABEL_16;
    case 0:
      v7 = this->fields.friendCodeLabel;
      if ( v7 )
      {
        UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
        v9 = 0;
LABEL_17:
        FriendCodeComponent__SetTouchEnable(this, v9, v8);
        return;
      }
LABEL_19:
      sub_1C71608(v7, *(_QWORD *)&state);
  }
}


System_String_o *FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC9318 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CC9318 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0);
LABEL_8:
    sub_1C71608(Instance, v3);
  }
  return 0;
}


void FriendCodeComponent__OnClickFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *friendCode; // x2
  int32_t v7; // w1

  if ( (byte_4CC9316 & 1) == 0 )
  {
    sub_1C713B0(&Method_FriendCodeComponent_OnClickFriendCode__);
    byte_4CC9316 = 1;
  }
  if ( this->fields.dispState )
  {
    v3 = Method_FriendCodeComponent_OnClickFriendCode__;
    if ( (*((_BYTE *)Method_FriendCodeComponent_OnClickFriendCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_FriendCodeComponent_OnClickFriendCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    friendCode = this->fields.friendCode;
    if ( this->fields.dispState == 1 )
      v7 = 2;
    else
      v7 = 1;
    this->fields.dispState = v7;
    FriendCodeComponent__ChangeDispState(this, v7, friendCode, v5);
  }
}


void FriendCodeComponent__SetTouchEnable(FriendCodeComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *touchCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_4CC931A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC931A = 1;
  }
  if ( this->fields.dispState )
  {
    touchCollider = (UnityEngine_Object_o *)this->fields.touchCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(touchCollider, 0, 0) )
    {
      v7 = (UnityEngine_Collider_o *)this->fields.touchCollider;
      if ( !v7 )
        sub_1C71608(0, v6);
      UnityEngine_Collider__set_enabled(v7, isEnable, 0);
    }
  }
}


void FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent_o *v2; // x19
  System_String_o *FriendCodeFromNetworkManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_String_o *friendCode; // x2
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  unsigned int StoryProgress; // w0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4CC9315 & 1) == 0 )
  {
    sub_1C713B0(&SceneList_TypeInfo);
    this = (FriendCodeComponent_o *)sub_1C713B0(&TitleRootComponent_TypeInfo);
    byte_4CC9315 = 1;
  }
  FriendCodeFromNetworkManager = FriendCodeComponent__GetFriendCodeFromNetworkManager(this, method);
  v2->fields.friendCode = FriendCodeFromNetworkManager;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v2->fields.friendCode,
    (int32_t)FriendCodeFromNetworkManager,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  friendCode = v2->fields.friendCode;
  v11 = friendCode != 0;
  v2->fields.dispState = v11;
  FriendCodeComponent__ChangeDispState(v2, v11, friendCode, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  if ( !gameObject )
    goto LABEL_21;
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(9, 0);
  if ( System_String__op_Equality(name, SceneName, 0) )
  {
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    StoryProgress = TitleRootComponent__GetStoryProgress(0);
    if ( StoryProgress < 3 )
    {
      gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
      if ( !gameObject )
        goto LABEL_21;
      v23.fields.r = 0.07451;
      v23.fields.g = 0.20392;
      v23.fields.b = 0.57647;
      v23.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v23, 0);
    }
    else if ( StoryProgress == 3 )
    {
      gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
      if ( gameObject )
      {
        v20.fields.r = 1.0;
        v20.fields.g = 1.0;
        v20.fields.b = 1.0;
        v20.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, v20, 0);
        gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
        if ( gameObject )
        {
          UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0);
          gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
          if ( gameObject )
          {
            v21.fields.r = 0.0078431;
            v21.fields.g = 0.45098;
            v21.fields.b = 0.84706;
            v21.fields.a = 1.0;
            UILabel__set_effectColor((UILabel_o *)gameObject, v21, 0);
            return;
          }
        }
      }
LABEL_21:
      sub_1C71608(gameObject, v14);
    }
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_21;
    v22.fields.r = 1.0;
    v22.fields.g = 1.0;
    v22.fields.b = 1.0;
    v22.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v22, 0);
    gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_21;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0);
  }
}


void FriendCodeComponent__UpdateFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_String_o *DispFriendCode; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *friendCode; // x2
  int32_t v13; // w1
  const MethodInfo *v14; // x3

  if ( (byte_4CC9319 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4CC9319 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0);
  this->fields.friendCode = DispFriendCode;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.friendCode,
    (int32_t)DispFriendCode,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  friendCode = this->fields.friendCode;
  v13 = friendCode != 0;
  this->fields.dispState = v13;
  FriendCodeComponent__ChangeDispState(this, v13, friendCode, v14);
}