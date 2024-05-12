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
  FriendCodeComponent_o *v9; // x0
  bool v10; // w1
  struct UILabel_o *v11; // x20
  System_String_o *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x1
  UILabel_o *v15; // x0
  struct UILabel_o *friendCodeLabel; // x21
  System_String_o *v17; // x0

  if ( (byte_438EA9F & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_15000/*"USER_FRIEND_CODE"*/);
    sub_B775C4(&StringLiteral_15001/*"USER_FRIEND_CODE_HIDDEN"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EA9F = 1;
  }
  switch ( state )
  {
    case 2:
      friendCodeLabel = this->fields.friendCodeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15000/*"USER_FRIEND_CODE"*/, 0LL);
      v7 = (UILabel_o *)System_String__Format(v17, (Il2CppObject *)code, 0LL);
      if ( !friendCodeLabel )
        goto LABEL_21;
      v14 = (System_String_o *)v7;
      v15 = friendCodeLabel;
LABEL_18:
      UILabel__set_text(v15, v14, 0LL);
      v10 = 1;
      v9 = this;
      goto LABEL_19;
    case 1:
      v11 = this->fields.friendCodeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15000/*"USER_FRIEND_CODE"*/, 0LL);
      v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_15001/*"USER_FRIEND_CODE_HIDDEN"*/, 0LL);
      v7 = (UILabel_o *)System_String__Format(v12, v13, 0LL);
      if ( !v11 )
        goto LABEL_21;
      v14 = (System_String_o *)v7;
      v15 = v11;
      goto LABEL_18;
    case 0:
      v7 = this->fields.friendCodeLabel;
      if ( v7 )
      {
        UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v9 = this;
        v10 = 0;
LABEL_19:
        FriendCodeComponent__SetTouchEnable(v9, v10, v8);
        return;
      }
LABEL_21:
      sub_B7769C(v7, *(_QWORD *)&state);
  }
}


System_String_o *__fastcall FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438EAA0 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_438EAA0 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode(Instance, 0LL) )
  {
    Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode(Instance, 0LL);
LABEL_8:
    sub_B7769C(Instance, v3);
  }
  return 0LL;
}


void __fastcall FriendCodeComponent__OnClickFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *friendCode; // x2
  int32_t v5; // w1

  if ( (byte_438EA9E & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EA9E = 1;
  }
  if ( this->fields.dispState )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    friendCode = this->fields.friendCode;
    if ( this->fields.dispState == 1 )
      v5 = 2;
    else
      v5 = 1;
    this->fields.dispState = v5;
    FriendCodeComponent__ChangeDispState(this, v5, friendCode, v3);
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

  if ( (byte_438EAA2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EAA2 = 1;
  }
  if ( this->fields.dispState )
  {
    touchCollider = (UnityEngine_Object_o *)this->fields.touchCollider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(touchCollider, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Collider_o *)this->fields.touchCollider;
      if ( !v7 )
        sub_B7769C(0LL, v6);
      UnityEngine_Collider__set_enabled(v7, isEnable, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent_o *v2; // x19
  System_Int32_array **FriendCodeFromNetworkManager; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_String_o *friendCode; // x2
  _BOOL4 v14; // w1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  unsigned int StoryProgress; // w0
  int v19; // s3
  float v20; // s4
  float v21; // s5
  float v22; // s6
  UIWidget_o *v23; // x20
  int v24; // s0
  UILabel_o *v28; // x19
  float v29; // s4
  float v30; // s5
  float v31; // s6
  UIWidget_o *v32; // x20
  int v33; // s0
  int v37; // s0
  int v38; // s1
  int v39; // s2
  UIWidget_o *friendCodeLabel; // x19
  UnityEngine_Color_o v41; // [xsp+8h] [xbp-28h] BYREF
  int32_t m_Handle; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_438EA9D & 1) == 0 )
  {
    sub_B775C4(&SceneList_TypeInfo);
    this = (FriendCodeComponent_o *)sub_B775C4(&TitleRootComponent_TypeInfo);
    byte_438EA9D = 1;
  }
  m_Handle = 0;
  FriendCodeFromNetworkManager = (System_Int32_array **)FriendCodeComponent__GetFriendCodeFromNetworkManager(
                                                          this,
                                                          method);
  v2->fields.friendCode = (struct System_String_o *)FriendCodeFromNetworkManager;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.friendCode,
    FriendCodeFromNetworkManager,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !v2 )
    goto LABEL_24;
  friendCode = v2->fields.friendCode;
  v14 = friendCode != 0LL;
  v2->fields.dispState = v14;
  FriendCodeComponent__ChangeDispState(v2, v14, friendCode, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  m_Handle = UnityEngine_GameObject__get_scene(gameObject, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(9, 0LL);
  if ( System_String__op_Equality(name, SceneName, 0LL) )
  {
    if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    }
    StoryProgress = TitleRootComponent__GetStoryProgress(0LL);
    if ( StoryProgress < 3 )
    {
      v37 = 1033410713;
      v38 = 1045483729;
      v39 = 1058247572;
      friendCodeLabel = (UIWidget_o *)v2->fields.friendCodeLabel;
      v41 = (UnityEngine_Color_o)0LL;
      UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v19 - 3), v20, v21, v22, (const MethodInfo *)&v41);
      if ( !friendCodeLabel )
        goto LABEL_24;
      UIWidget__set_color(friendCodeLabel, v41, 0LL);
    }
    else if ( StoryProgress == 3 )
    {
      v23 = (UIWidget_o *)v2->fields.friendCodeLabel;
      *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
      if ( v23 )
      {
        UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
        gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
        if ( gameObject )
        {
          UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0LL);
          v43.fields.r = 0.0078431;
          v43.fields.g = 0.45098;
          v43.fields.b = 0.84706;
          v28 = v2->fields.friendCodeLabel;
          *(_QWORD *)&v41.fields.r = 0LL;
          *(_QWORD *)&v41.fields.b = 0LL;
          UnityEngine_Color___ctor_41410832(v43, v29, v30, v31, (const MethodInfo *)&v41);
          if ( v28 )
          {
            UILabel__set_effectColor(v28, v41, 0LL);
            return;
          }
        }
      }
LABEL_24:
      sub_B7769C(gameObject, v11);
    }
  }
  else
  {
    v32 = (UIWidget_o *)v2->fields.friendCodeLabel;
    *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
    if ( !v32 )
      goto LABEL_24;
    UIWidget__set_color(v32, *(UnityEngine_Color_o *)&v33, 0LL);
    gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_24;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendCodeComponent__UpdateFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_String_o *DispFriendCode; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x3
  System_String_o *friendCode; // x2
  _BOOL4 v14; // w1

  if ( (byte_438EAA1 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_438EAA1 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance
    || (DispFriendCode = NetworkManager__GetDispFriendCode(Instance, 0LL),
        this->fields.friendCode = DispFriendCode,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.friendCode,
          (System_Int32_array **)DispFriendCode,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        !this) )
  {
    sub_B7769C(Instance, v4);
  }
  friendCode = this->fields.friendCode;
  v14 = friendCode != 0LL;
  this->fields.dispState = v14;
  FriendCodeComponent__ChangeDispState(this, v14, friendCode, v12);
}