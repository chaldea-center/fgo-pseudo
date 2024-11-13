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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *v13; // x0
  const MethodInfo *v14; // x2
  bool v15; // w1
  struct UILabel_o *friendCodeLabel; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x1
  UILabel_o *v19; // x0
  struct UILabel_o *v20; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0

  if ( (byte_4B181C5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&state, code);
    sub_1BCA7E0(&StringLiteral_14999/*"USER_FRIEND_CODE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_15000/*"USER_FRIEND_CODE_HIDDEN"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B181C5 = 1;
  }
  switch ( state )
  {
    case 2:
      friendCodeLabel = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14999/*"USER_FRIEND_CODE"*/, 0LL);
      v13 = (UILabel_o *)System_String__Format(v17, (Il2CppObject *)code, 0LL);
      if ( !friendCodeLabel )
        goto LABEL_19;
      v18 = (System_String_o *)v13;
      v19 = friendCodeLabel;
LABEL_16:
      UILabel__set_text(v19, v18, 0LL);
      v15 = 1;
      goto LABEL_17;
    case 1:
      v20 = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_14999/*"USER_FRIEND_CODE"*/, 0LL);
      v22 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_15000/*"USER_FRIEND_CODE_HIDDEN"*/, 0LL);
      v13 = (UILabel_o *)System_String__Format(v21, v22, 0LL);
      if ( !v20 )
        goto LABEL_19;
      v18 = (System_String_o *)v13;
      v19 = v20;
      goto LABEL_16;
    case 0:
      v13 = this->fields.friendCodeLabel;
      if ( v13 )
      {
        UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v15 = 0;
LABEL_17:
        FriendCodeComponent__SetTouchEnable(this, v15, v14);
        return;
      }
LABEL_19:
      sub_1BCAA3C(v13, *(_QWORD *)&state);
  }
}


System_String_o *__fastcall FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B181C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method, v2);
    byte_4B181C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0LL);
LABEL_8:
    sub_1BCAA3C(Instance, v4);
  }
  return 0LL;
}


void __fastcall FriendCodeComponent__OnClickFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *friendCode; // x2
  int32_t v8; // w1

  if ( (byte_4B181C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendCodeComponent_OnClickFriendCode__, method, v2);
    byte_4B181C4 = 1;
  }
  if ( this->fields.dispState )
  {
    v4 = Method_FriendCodeComponent_OnClickFriendCode__;
    if ( (*((_BYTE *)Method_FriendCodeComponent_OnClickFriendCode__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendCodeComponent_OnClickFriendCode__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    friendCode = this->fields.friendCode;
    if ( this->fields.dispState == 1 )
      v8 = 2;
    else
      v8 = 1;
    this->fields.dispState = v8;
    FriendCodeComponent__ChangeDispState(this, v8, friendCode, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendCodeComponent__SetTouchEnable(
        FriendCodeComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_4B181C8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isEnable, method);
    byte_4B181C8 = 1;
  }
  if ( this->fields.dispState )
  {
    touchCollider = (UnityEngine_Object_o *)this->fields.touchCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
    if ( !UnityEngine_Object__op_Equality(touchCollider, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Collider_o *)this->fields.touchCollider;
      if ( !v7 )
        sub_1BCAA3C(0LL, v6);
      UnityEngine_Collider__set_enabled(v7, isEnable, 0LL);
    }
  }
}


void __fastcall FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FriendCodeComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *FriendCodeFromNetworkManager; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_String_o *friendCode; // x2
  _BOOL4 v14; // w1
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int32_t *p_m_Handle; // x0
  __int64 v19; // x1
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  unsigned int StoryProgress; // w0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B181C3 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, method, v2);
    this = (FriendCodeComponent_o *)sub_1BCA7E0(&TitleRootComponent_TypeInfo, v4, v5);
    byte_4B181C3 = 1;
  }
  FriendCodeFromNetworkManager = FriendCodeComponent__GetFriendCodeFromNetworkManager(this, method);
  v3->fields.friendCode = FriendCodeFromNetworkManager;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.friendCode,
    (int64_t)FriendCodeFromNetworkManager,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  friendCode = v3->fields.friendCode;
  v14 = friendCode != 0LL;
  v3->fields.dispState = v14;
  FriendCodeComponent__ChangeDispState(v3, v14, friendCode, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v19);
  SceneName = SceneList__getSceneName(9, 0LL);
  if ( System_String__op_Equality(name, SceneName, 0LL) )
  {
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, v17);
    StoryProgress = TitleRootComponent__GetStoryProgress(0LL);
    if ( StoryProgress < 3 )
    {
      gameObject = (UnityEngine_GameObject_o *)v3->fields.friendCodeLabel;
      if ( !gameObject )
        goto LABEL_21;
      v27.fields.r = 0.07451;
      v27.fields.g = 0.20392;
      v27.fields.b = 0.57647;
      v27.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v27, 0LL);
    }
    else if ( StoryProgress == 3 )
    {
      gameObject = (UnityEngine_GameObject_o *)v3->fields.friendCodeLabel;
      if ( gameObject )
      {
        v24.fields.r = 1.0;
        v24.fields.g = 1.0;
        v24.fields.b = 1.0;
        v24.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, v24, 0LL);
        gameObject = (UnityEngine_GameObject_o *)v3->fields.friendCodeLabel;
        if ( gameObject )
        {
          UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0LL);
          gameObject = (UnityEngine_GameObject_o *)v3->fields.friendCodeLabel;
          if ( gameObject )
          {
            v25.fields.r = 0.0078431;
            v25.fields.g = 0.45098;
            v25.fields.b = 0.84706;
            v25.fields.a = 1.0;
            UILabel__set_effectColor((UILabel_o *)gameObject, v25, 0LL);
            return;
          }
        }
      }
LABEL_21:
      sub_1BCAA3C(gameObject, v17);
    }
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)v3->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_21;
    v26.fields.r = 1.0;
    v26.fields.g = 1.0;
    v26.fields.b = 1.0;
    v26.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v26, 0LL);
    gameObject = (UnityEngine_GameObject_o *)v3->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_21;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendCodeComponent__UpdateFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_String_o *DispFriendCode; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_String_o *friendCode; // x2
  _BOOL4 v14; // w1
  const MethodInfo *v15; // x3

  if ( (byte_4B181C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method, v2);
    byte_4B181C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0LL);
  this->fields.friendCode = DispFriendCode;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.friendCode,
    (int64_t)DispFriendCode,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  friendCode = this->fields.friendCode;
  v14 = friendCode != 0LL;
  this->fields.dispState = v14;
  FriendCodeComponent__ChangeDispState(this, v14, friendCode, v15);
}