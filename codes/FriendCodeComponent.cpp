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
  FriendCodeComponent_o *v12; // x0
  bool v13; // w1
  struct UILabel_o *v14; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x1
  UILabel_o *v18; // x0
  struct UILabel_o *friendCodeLabel; // x21
  System_String_o *v20; // x0

  if ( (byte_418A868 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&StringLiteral_14745/*"USER_FRIEND_CODE"*/, v7);
    sub_B2C35C(&StringLiteral_14746/*"USER_FRIEND_CODE_HIDDEN"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418A868 = 1;
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
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_14745/*"USER_FRIEND_CODE"*/, 0LL);
      v10 = (UILabel_o *)System_String__Format(v20, (Il2CppObject *)code, 0LL);
      if ( !friendCodeLabel )
        goto LABEL_21;
      v17 = (System_String_o *)v10;
      v18 = friendCodeLabel;
LABEL_18:
      UILabel__set_text(v18, v17, 0LL);
      v13 = 1;
      v12 = this;
      goto LABEL_19;
    case 1:
      v14 = this->fields.friendCodeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14745/*"USER_FRIEND_CODE"*/, 0LL);
      v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_14746/*"USER_FRIEND_CODE_HIDDEN"*/, 0LL);
      v10 = (UILabel_o *)System_String__Format(v15, v16, 0LL);
      if ( !v14 )
        goto LABEL_21;
      v17 = (System_String_o *)v10;
      v18 = v14;
      goto LABEL_18;
    case 0:
      v10 = this->fields.friendCodeLabel;
      if ( v10 )
      {
        UILabel__set_text(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v12 = this;
        v13 = 0;
LABEL_19:
        FriendCodeComponent__SetTouchEnable(v12, v13, v11);
        return;
      }
LABEL_21:
      sub_B2C434(v10, *(_QWORD *)&state);
  }
}


System_String_o *__fastcall FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418A869 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_418A869 = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode(Instance, 0LL) )
  {
    Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode(Instance, 0LL);
LABEL_8:
    sub_B2C434(Instance, v3);
  }
  return 0LL;
}


void __fastcall FriendCodeComponent__OnClickFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *friendCode; // x2
  int32_t v5; // w1

  if ( (byte_418A867 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A867 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendCodeComponent__SetTouchEnable(
        FriendCodeComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_418A86B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isEnable);
    byte_418A86B = 1;
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
        sub_B2C434(0LL, v6);
      UnityEngine_Collider__set_enabled(v7, isEnable, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  FriendCodeComponent_o *v2; // x19
  __int64 v3; // x1
  System_Int32_array **FriendCodeFromNetworkManager; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_String_o *friendCode; // x2
  _BOOL4 v15; // w1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  unsigned int StoryProgress; // w0
  int v20; // s3
  float v21; // s4
  float v22; // s5
  float v23; // s6
  UIWidget_o *v24; // x20
  int v25; // s0
  UILabel_o *v29; // x19
  float v30; // s4
  float v31; // s5
  float v32; // s6
  UIWidget_o *v33; // x20
  int v34; // s0
  int v38; // s0
  int v39; // s1
  int v40; // s2
  UIWidget_o *friendCodeLabel; // x19
  UnityEngine_Color_o v42; // [xsp+8h] [xbp-28h] BYREF
  int32_t m_Handle; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_418A866 & 1) == 0 )
  {
    sub_B2C35C(&SceneList_TypeInfo, method);
    this = (FriendCodeComponent_o *)sub_B2C35C(&TitleRootComponent_TypeInfo, v3);
    byte_418A866 = 1;
  }
  m_Handle = 0;
  FriendCodeFromNetworkManager = (System_Int32_array **)FriendCodeComponent__GetFriendCodeFromNetworkManager(
                                                          this,
                                                          method);
  v2->fields.friendCode = (struct System_String_o *)FriendCodeFromNetworkManager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.friendCode,
    FriendCodeFromNetworkManager,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !v2 )
    goto LABEL_24;
  friendCode = v2->fields.friendCode;
  v15 = friendCode != 0LL;
  v2->fields.dispState = v15;
  FriendCodeComponent__ChangeDispState(v2, v15, friendCode, v13);
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
      v38 = 1033410713;
      v39 = 1045483729;
      v40 = 1058247572;
      friendCodeLabel = (UIWidget_o *)v2->fields.friendCodeLabel;
      v42 = (UnityEngine_Color_o)0LL;
      UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v20 - 3), v21, v22, v23, (const MethodInfo *)&v42);
      if ( !friendCodeLabel )
        goto LABEL_24;
      UIWidget__set_color(friendCodeLabel, v42, 0LL);
    }
    else if ( StoryProgress == 3 )
    {
      v24 = (UIWidget_o *)v2->fields.friendCodeLabel;
      *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
      if ( v24 )
      {
        UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
        gameObject = (UnityEngine_GameObject_o *)v2->fields.friendCodeLabel;
        if ( gameObject )
        {
          UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0LL);
          v44.fields.r = 0.0078431;
          v44.fields.g = 0.45098;
          v44.fields.b = 0.84706;
          v29 = v2->fields.friendCodeLabel;
          *(_QWORD *)&v42.fields.r = 0LL;
          *(_QWORD *)&v42.fields.b = 0LL;
          UnityEngine_Color___ctor_40633184(v44, v30, v31, v32, (const MethodInfo *)&v42);
          if ( v29 )
          {
            UILabel__set_effectColor(v29, v42, 0LL);
            return;
          }
        }
      }
LABEL_24:
      sub_B2C434(gameObject, v12);
    }
  }
  else
  {
    v33 = (UIWidget_o *)v2->fields.friendCodeLabel;
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !v33 )
      goto LABEL_24;
    UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
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

  if ( (byte_418A86A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, method);
    byte_418A86A = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance
    || (DispFriendCode = NetworkManager__GetDispFriendCode(Instance, 0LL),
        this->fields.friendCode = DispFriendCode,
        sub_B2C2F8(
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
    sub_B2C434(Instance, v4);
  }
  friendCode = this->fields.friendCode;
  v14 = friendCode != 0LL;
  this->fields.dispState = v14;
  FriendCodeComponent__ChangeDispState(this, v14, friendCode, v12);
}