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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UILabel_o *v16; // x0
  const MethodInfo *v17; // x2
  FriendCodeComponent_o *v18; // x0
  bool v19; // w1
  struct UILabel_o *v20; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x1
  UILabel_o *v24; // x0
  struct UILabel_o *friendCodeLabel; // x21
  System_String_o *v26; // x0

  if ( (byte_42EBDEB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, state, (_DWORD)code, method);
    sub_B5D5C4(&StringLiteral_14903/*"USER_FRIEND_CODE"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_14904/*"USER_FRIEND_CODE_HIDDEN"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42EBDEB = 1;
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
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_14903/*"USER_FRIEND_CODE"*/, 0LL);
      v16 = (UILabel_o *)System_String__Format(v26, (Il2CppObject *)code, 0LL);
      if ( !friendCodeLabel )
        goto LABEL_21;
      v23 = (System_String_o *)v16;
      v24 = friendCodeLabel;
LABEL_18:
      UILabel__set_text(v24, v23, 0LL);
      v19 = 1;
      v18 = this;
      goto LABEL_19;
    case 1:
      v20 = this->fields.friendCodeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_14903/*"USER_FRIEND_CODE"*/, 0LL);
      v22 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_14904/*"USER_FRIEND_CODE_HIDDEN"*/, 0LL);
      v16 = (UILabel_o *)System_String__Format(v21, v22, 0LL);
      if ( !v20 )
        goto LABEL_21;
      v23 = (System_String_o *)v16;
      v24 = v20;
      goto LABEL_18;
    case 0:
      v16 = this->fields.friendCodeLabel;
      if ( v16 )
      {
        UILabel__set_text(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v18 = this;
        v19 = 0;
LABEL_19:
        FriendCodeComponent__SetTouchEnable(v18, v19, v17);
        return;
      }
LABEL_21:
      sub_B5D69C(v16, *(_QWORD *)&state);
  }
}


System_String_o *__fastcall FriendCodeComponent__GetFriendCodeFromNetworkManager(
        FriendCodeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  NetworkManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EBDEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBDEC = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( NetworkManager__ReadFriendCode(Instance, 0LL) )
  {
    Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( Instance )
      return NetworkManager__GetDispFriendCode(Instance, 0LL);
LABEL_8:
    sub_B5D69C(Instance, v5);
  }
  return 0LL;
}


void __fastcall FriendCodeComponent__OnClickFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3
  System_String_o *friendCode; // x2
  int32_t v7; // w1

  if ( (byte_42EBDEA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDEA = 1;
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
  __int64 v3; // x3
  UnityEngine_Object_o *touchCollider; // x21
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  if ( (byte_42EBDEE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnable, (_DWORD)method, v3);
    byte_42EBDEE = 1;
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
      v8 = (UnityEngine_Collider_o *)this->fields.touchCollider;
      if ( !v8 )
        sub_B5D69C(0LL, v7);
      UnityEngine_Collider__set_enabled(v8, isEnable, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendCodeComponent__Setup(FriendCodeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FriendCodeComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array **FriendCodeFromNetworkManager; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_String_o *friendCode; // x2
  _BOOL4 v19; // w1
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  unsigned int StoryProgress; // w0
  int v24; // s3
  float v25; // s4
  float v26; // s5
  float v27; // s6
  UIWidget_o *v28; // x20
  int v29; // s0
  UILabel_o *v33; // x19
  float v34; // s4
  float v35; // s5
  float v36; // s6
  UIWidget_o *v37; // x20
  int v38; // s0
  int v42; // s0
  int v43; // s1
  int v44; // s2
  UIWidget_o *friendCodeLabel; // x19
  UnityEngine_Color_o v46; // [xsp+8h] [xbp-28h] BYREF
  int32_t m_Handle; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42EBDE9 & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, (_DWORD)method, v2, v3);
    this = (FriendCodeComponent_o *)sub_B5D5C4(&TitleRootComponent_TypeInfo, v5, v6, v7);
    byte_42EBDE9 = 1;
  }
  m_Handle = 0;
  FriendCodeFromNetworkManager = (System_Int32_array **)FriendCodeComponent__GetFriendCodeFromNetworkManager(
                                                          this,
                                                          method);
  v4->fields.friendCode = (struct System_String_o *)FriendCodeFromNetworkManager;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.friendCode,
    FriendCodeFromNetworkManager,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !v4 )
    goto LABEL_24;
  friendCode = v4->fields.friendCode;
  v19 = friendCode != 0LL;
  v4->fields.dispState = v19;
  FriendCodeComponent__ChangeDispState(v4, v19, friendCode, v17);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
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
      v42 = 1033410713;
      v43 = 1045483729;
      v44 = 1058247572;
      friendCodeLabel = (UIWidget_o *)v4->fields.friendCodeLabel;
      v46 = (UnityEngine_Color_o)0LL;
      UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v24 - 3), v25, v26, v27, (const MethodInfo *)&v46);
      if ( !friendCodeLabel )
        goto LABEL_24;
      UIWidget__set_color(friendCodeLabel, v46, 0LL);
    }
    else if ( StoryProgress == 3 )
    {
      v28 = (UIWidget_o *)v4->fields.friendCodeLabel;
      *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
      if ( v28 )
      {
        UIWidget__set_color(v28, *(UnityEngine_Color_o *)&v29, 0LL);
        gameObject = (UnityEngine_GameObject_o *)v4->fields.friendCodeLabel;
        if ( gameObject )
        {
          UILabel__set_effectStyle((UILabel_o *)gameObject, 2, 0LL);
          v48.fields.r = 0.0078431;
          v48.fields.g = 0.45098;
          v48.fields.b = 0.84706;
          v33 = v4->fields.friendCodeLabel;
          *(_QWORD *)&v46.fields.r = 0LL;
          *(_QWORD *)&v46.fields.b = 0LL;
          UnityEngine_Color___ctor_41567816(v48, v34, v35, v36, (const MethodInfo *)&v46);
          if ( v33 )
          {
            UILabel__set_effectColor(v33, v46, 0LL);
            return;
          }
        }
      }
LABEL_24:
      sub_B5D69C(gameObject, v16);
    }
  }
  else
  {
    v37 = (UIWidget_o *)v4->fields.friendCodeLabel;
    *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
    if ( !v37 )
      goto LABEL_24;
    UIWidget__set_color(v37, *(UnityEngine_Color_o *)&v38, 0LL);
    gameObject = (UnityEngine_GameObject_o *)v4->fields.friendCodeLabel;
    if ( !gameObject )
      goto LABEL_24;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0LL);
  }
}


void __fastcall FriendCodeComponent__UpdateFriendCode(FriendCodeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  NetworkManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_String_o *DispFriendCode; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x3
  System_String_o *friendCode; // x2
  _BOOL4 v16; // w1

  if ( (byte_42EBDED & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBDED = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance
    || (DispFriendCode = NetworkManager__GetDispFriendCode(Instance, 0LL),
        this->fields.friendCode = DispFriendCode,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.friendCode,
          (System_Int32_array **)DispFriendCode,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        !this) )
  {
    sub_B5D69C(Instance, v6);
  }
  friendCode = this->fields.friendCode;
  v16 = friendCode != 0LL;
  this->fields.dispState = v16;
  FriendCodeComponent__ChangeDispState(this, v16, friendCode, v14);
}