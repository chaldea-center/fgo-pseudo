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
  struct UILabel_o *v10; // x20
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x1
  UILabel_o *v14; // x0
  struct UILabel_o *friendCodeLabel; // x21
  System_String_o *v16; // x0

  if ( (byte_593ADD2 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_15415/*"USER_FRIEND_CODE"*/);
    sub_21FFC50(&StringLiteral_15416/*"USER_FRIEND_CODE_HIDDEN"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593ADD2 = 1;
  }
  switch ( state )
  {
    case 2:
      friendCodeLabel = this->fields.friendCodeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15415/*"USER_FRIEND_CODE"*/, 0);
      v7 = (UILabel_o *)System_String__Format(v16, (Il2CppObject *)code, 0);
      if ( !friendCodeLabel )
        goto LABEL_19;
      v13 = (System_String_o *)v7;
      v14 = friendCodeLabel;
LABEL_16:
      UILabel__set_text(v14, v13, 0);
      v9 = 1;
      goto LABEL_17;
    case 1:
      v10 = this->fields.friendCodeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15415/*"USER_FRIEND_CODE"*/, 0);
      v12 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"USER_FRIEND_CODE_HIDDEN"*/, 0);
      v7 = (UILabel_o *)System_String__Format(v11, v12, 0);
      if ( !v10 )
        goto LABEL_19;
      v13 = (System_String_o *)v7;
      v14 = v10;
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
      sub_21FFECC(v7, *(_QWORD *)&state);
  }
}


System_String_o *FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593ADD3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_593ADD3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0);
LABEL_8:
    sub_21FFECC(Instance, v3);
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

  if ( (byte_593ADD1 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendCodeComponent_OnClickFriendCode__);
    byte_593ADD1 = 1;
  }
  if ( this->fields.dispState )
  {
    v3 = Method_FriendCodeComponent_OnClickFriendCode__;
    if ( (*((_BYTE *)Method_FriendCodeComponent_OnClickFriendCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FriendCodeComponent_OnClickFriendCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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


// local variable allocation has failed, the output may be wrong!
void FriendCodeComponent__SetTouchEnable(FriendCodeComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *touchCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_593ADD5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593ADD5 = 1;
  }
  if ( this->fields.dispState )
  {
    touchCollider = (UnityEngine_Object_o *)this->fields.touchCollider;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
    if ( !UnityEngine_Object__op_Equality(touchCollider, 0, 0) )
    {
      v7 = (UnityEngine_Collider_o *)this->fields.touchCollider;
      if ( !v7 )
        sub_21FFECC(0, v6);
      UnityEngine_Collider__set_enabled(v7, isEnable, 0);
    }
  }
}


void FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent_o *v2; // x19
  System_String_o *FriendCodeFromNetworkManager; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *friendCode; // x2
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int32_t *p_m_Handle; // x0
  __int64 v16; // x1
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  unsigned int StoryProgress; // w0
  int32_t m_Handle; // [xsp+Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_593ADD0 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    this = (FriendCodeComponent_o *)sub_21FFC50(&TitleRootComponent_TypeInfo);
    byte_593ADD0 = 1;
  }
  m_Handle = 0;
  FriendCodeFromNetworkManager = FriendCodeComponent__GetFriendCodeFromNetworkManager(this, method);
  v2->fields.friendCode = FriendCodeFromNetworkManager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.friendCode,
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
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v16);
  SceneName = SceneList__getSceneName(9, 0);
  if ( System_String__op_Equality(name, SceneName, 0) )
  {
    if ( !*(&TitleRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, v14);
    StoryProgress = TitleRootComponent__GetStoryProgress(0);
    if ( StoryProgress <= 6 )
    {
      if ( ((1 << StoryProgress) & 0x27) != 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
        if ( gameObject )
        {
          v21.fields.a = 1.0;
          v21.fields.r = 0.07451;
          v21.fields.g = 0.20392;
          v21.fields.b = 0.57647;
          UIWidget__set_color((UIWidget_o *)gameObject, v21, 0);
          return;
        }
LABEL_21:
        sub_21FFECC(gameObject, v14);
      }
      gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
      if ( !gameObject )
        goto LABEL_21;
      v23.fields.r = 1.0;
      v23.fields.g = 1.0;
      v23.fields.b = 1.0;
      v23.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v23, 0);
      gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
      if ( !gameObject )
        goto LABEL_21;
      UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0);
      gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
      if ( !gameObject )
        goto LABEL_21;
      v24.fields.a = 1.0;
      v24.fields.r = 0.0078431;
      v24.fields.g = 0.45098;
      v24.fields.b = 0.84706;
      UILabel__set_effectColor((UILabel_o *)gameObject, v24, 0);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *friendCode; // x2
  int32_t v13; // w1
  const MethodInfo *v14; // x3

  if ( (byte_593ADD4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_593ADD4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0);
  this->fields.friendCode = DispFriendCode;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendCode,
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