void __fastcall FriendCodeComponent___ctor(FriendCodeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall FriendCodeComponent__Awake(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent__Setup(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendCodeComponent__ChangeDispState(
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

  if ( (byte_4BDE5D1 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_15095/*"USER_FRIEND_CODE"*/);
    sub_1C21E38(&StringLiteral_15096/*"USER_FRIEND_CODE_HIDDEN"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE5D1 = 1;
  }
  switch ( state )
  {
    case 2:
      friendCodeLabel = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15095/*"USER_FRIEND_CODE"*/, 0LL);
      v7 = (UILabel_o *)System_String__Format(v11, (Il2CppObject *)code, 0LL);
      if ( !friendCodeLabel )
        goto LABEL_19;
      v12 = (System_String_o *)v7;
      v13 = friendCodeLabel;
LABEL_16:
      UILabel__set_text(v13, v12, 0LL);
      v9 = 1;
      goto LABEL_17;
    case 1:
      v14 = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15095/*"USER_FRIEND_CODE"*/, 0LL);
      v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_15096/*"USER_FRIEND_CODE_HIDDEN"*/, 0LL);
      v7 = (UILabel_o *)System_String__Format(v15, v16, 0LL);
      if ( !v14 )
        goto LABEL_19;
      v12 = (System_String_o *)v7;
      v13 = v14;
      goto LABEL_16;
    case 0:
      v7 = this->fields.friendCodeLabel;
      if ( v7 )
      {
        UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v9 = 0;
LABEL_17:
        FriendCodeComponent__SetTouchEnable(this, v9, v8);
        return;
      }
LABEL_19:
      sub_1C22094(v7, *(_QWORD *)&state);
  }
}


System_String_o *__fastcall FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDE5D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4BDE5D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0LL);
LABEL_8:
    sub_1C22094(Instance, v3);
  }
  return 0LL;
}


void __fastcall FriendCodeComponent__OnClickFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  System_String_o *friendCode; // x2
  int32_t v7; // w1

  if ( (byte_4BDE5D0 & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendCodeComponent_OnClickFriendCode__);
    byte_4BDE5D0 = 1;
  }
  if ( this->fields.dispState )
  {
    v3 = Method_FriendCodeComponent_OnClickFriendCode__;
    if ( (*((_BYTE *)Method_FriendCodeComponent_OnClickFriendCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FriendCodeComponent_OnClickFriendCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    friendCode = this->fields.friendCode;
    if ( this->fields.dispState == 1 )
      v7 = 2;
    else
      v7 = 1;
    this->fields.dispState = v7;
    FriendCodeComponent__ChangeDispState(this, v7, friendCode, v5);
  }
}


void __fastcall FriendCodeComponent__SetTouchEnable(
        FriendCodeComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_4BDE5D4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5D4 = 1;
  }
  if ( this->fields.dispState )
  {
    touchCollider = (UnityEngine_Object_o *)this->fields.touchCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(touchCollider, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Collider_o *)this->fields.touchCollider;
      if ( !v7 )
        sub_1C22094(0LL, v6);
      UnityEngine_Collider__set_enabled(v7, isEnable, 0LL);
    }
  }
}


void __fastcall FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent_o *v2; // x19
  System_String_o *FriendCodeFromNetworkManager; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_String_o *friendCode; // x2
  _BOOL4 v11; // w1
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
  if ( (byte_4BDE5CF & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    this = (FriendCodeComponent_o *)sub_1C21E38(&TitleRootComponent_TypeInfo);
    byte_4BDE5CF = 1;
  }
  FriendCodeFromNetworkManager = FriendCodeComponent__GetFriendCodeFromNetworkManager(this, method);
  v2->fields.friendCode = FriendCodeFromNetworkManager;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.friendCode,
    (int64_t)FriendCodeFromNetworkManager,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  friendCode = v2->fields.friendCode;
  v11 = friendCode != 0LL;
  v2->fields.dispState = v11;
  FriendCodeComponent__ChangeDispState(v2, v11, friendCode, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(9, 0LL);
  if ( System_String__op_Equality(name, SceneName, 0LL) )
  {
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    StoryProgress = TitleRootComponent__GetStoryProgress(0LL);
    if ( StoryProgress < 3 )
    {
      gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
      if ( !gameObject )
        goto LABEL_21;
      v23.fields.r = 0.07451;
      v23.fields.g = 0.20392;
      v23.fields.b = 0.57647;
      v23.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v23, 0LL);
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
        UIWidget__set_color((UIWidget_o *)gameObject, v20, 0LL);
        gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
        if ( gameObject )
        {
          UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0LL);
          gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
          if ( gameObject )
          {
            v21.fields.r = 0.0078431;
            v21.fields.g = 0.45098;
            v21.fields.b = 0.84706;
            v21.fields.a = 1.0;
            UILabel__set_effectColor((UILabel_o *)gameObject, v21, 0LL);
            return;
          }
        }
      }
LABEL_21:
      sub_1C22094(gameObject, v14);
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
    UIWidget__set_color((UIWidget_o *)gameObject, v22, 0LL);
    gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_21;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendCodeComponent__UpdateFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_String_o *DispFriendCode; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_String_o *friendCode; // x2
  _BOOL4 v13; // w1
  const MethodInfo *v14; // x3

  if ( (byte_4BDE5D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4BDE5D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0LL);
  this->fields.friendCode = DispFriendCode;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.friendCode, (int64_t)DispFriendCode, v6, v7, v8, v9, v10, v11);
  friendCode = this->fields.friendCode;
  v13 = friendCode != 0LL;
  this->fields.dispState = v13;
  FriendCodeComponent__ChangeDispState(this, v13, friendCode, v14);
}