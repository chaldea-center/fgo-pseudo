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
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *v10; // x0
  const MethodInfo *v11; // x2
  bool v12; // w1
  struct UILabel_o *friendCodeLabel; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x1
  UILabel_o *v16; // x0
  struct UILabel_o *v17; // x20
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0

  if ( (byte_4B39196 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_1BD3458(&StringLiteral_15018/*"USER_FRIEND_CODE"*/, v7);
    sub_1BD3458(&StringLiteral_15019/*"USER_FRIEND_CODE_HIDDEN"*/, v8);
    sub_1BD3458(&StringLiteral_1/*""*/, v9);
    byte_4B39196 = 1;
  }
  switch ( state )
  {
    case 2:
      friendCodeLabel = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15018/*"USER_FRIEND_CODE"*/, 0LL);
      v10 = (UILabel_o *)System_String__Format(v14, (Il2CppObject *)code, 0LL);
      if ( !friendCodeLabel )
        goto LABEL_19;
      v15 = (System_String_o *)v10;
      v16 = friendCodeLabel;
LABEL_16:
      UILabel__set_text(v16, v15, 0LL);
      v12 = 1;
      goto LABEL_17;
    case 1:
      v17 = this->fields.friendCodeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15018/*"USER_FRIEND_CODE"*/, 0LL);
      v19 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_15019/*"USER_FRIEND_CODE_HIDDEN"*/, 0LL);
      v10 = (UILabel_o *)System_String__Format(v18, v19, 0LL);
      if ( !v17 )
        goto LABEL_19;
      v15 = (System_String_o *)v10;
      v16 = v17;
      goto LABEL_16;
    case 0:
      v10 = this->fields.friendCodeLabel;
      if ( v10 )
      {
        UILabel__set_text(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v12 = 0;
LABEL_17:
        FriendCodeComponent__SetTouchEnable(this, v12, v11);
        return;
      }
LABEL_19:
      sub_1BD36B4(v10, *(_QWORD *)&state);
  }
}


System_String_o *__fastcall FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B39197 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_4B39197 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0LL);
LABEL_8:
    sub_1BD36B4(Instance, v3);
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

  if ( (byte_4B39195 & 1) == 0 )
  {
    sub_1BD3458(&Method_FriendCodeComponent_OnClickFriendCode__, method);
    byte_4B39195 = 1;
  }
  if ( this->fields.dispState )
  {
    v3 = Method_FriendCodeComponent_OnClickFriendCode__;
    if ( (*((_BYTE *)Method_FriendCodeComponent_OnClickFriendCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_FriendCodeComponent_OnClickFriendCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
void __fastcall FriendCodeComponent__SetTouchEnable(
        FriendCodeComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_4B39199 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4B39199 = 1;
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
        sub_1BD36B4(0LL, v6);
      UnityEngine_Collider__set_enabled(v7, isEnable, 0LL);
    }
  }
}


void __fastcall FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent_o *v2; // x19
  __int64 v3; // x1
  System_String_o *FriendCodeFromNetworkManager; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_String_o *friendCode; // x2
  _BOOL4 v12; // w1
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  unsigned int StoryProgress; // w0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4B39194 & 1) == 0 )
  {
    sub_1BD3458(&SceneList_TypeInfo, method);
    this = (FriendCodeComponent_o *)sub_1BD3458(&TitleRootComponent_TypeInfo, v3);
    byte_4B39194 = 1;
  }
  FriendCodeFromNetworkManager = FriendCodeComponent__GetFriendCodeFromNetworkManager(this, method);
  v2->fields.friendCode = FriendCodeFromNetworkManager;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields.friendCode,
    (int64_t)FriendCodeFromNetworkManager,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  friendCode = v2->fields.friendCode;
  v12 = friendCode != 0LL;
  v2->fields.dispState = v12;
  FriendCodeComponent__ChangeDispState(v2, v12, friendCode, v13);
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
      v24.fields.r = 0.07451;
      v24.fields.g = 0.20392;
      v24.fields.b = 0.57647;
      v24.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v24, 0LL);
    }
    else if ( StoryProgress == 3 )
    {
      gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
      if ( gameObject )
      {
        v21.fields.r = 1.0;
        v21.fields.g = 1.0;
        v21.fields.b = 1.0;
        v21.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, v21, 0LL);
        gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
        if ( gameObject )
        {
          UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0LL);
          gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
          if ( gameObject )
          {
            v22.fields.r = 0.0078431;
            v22.fields.g = 0.45098;
            v22.fields.b = 0.84706;
            v22.fields.a = 1.0;
            UILabel__set_effectColor((UILabel_o *)gameObject, v22, 0LL);
            return;
          }
        }
      }
LABEL_21:
      sub_1BD36B4(gameObject, v15);
    }
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_21;
    v23.fields.r = 1.0;
    v23.fields.g = 1.0;
    v23.fields.b = 1.0;
    v23.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v23, 0LL);
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

  if ( (byte_4B39198 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_4B39198 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0LL);
  this->fields.friendCode = DispFriendCode;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.friendCode, (int64_t)DispFriendCode, v6, v7, v8, v9, v10, v11);
  friendCode = this->fields.friendCode;
  v13 = friendCode != 0LL;
  this->fields.dispState = v13;
  FriendCodeComponent__ChangeDispState(this, v13, friendCode, v14);
}