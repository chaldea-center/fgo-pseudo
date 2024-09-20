void __fastcall BlankEarthShortcutButtonOptionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A57CCC & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthShortcutButtonOptionComponent_TypeInfo);
    byte_4A57CCC = 1;
  }
  BlankEarthShortcutButtonOptionComponent_TypeInfo->static_fields->OPTION_COMPONENT_UPDATE_INTERVAL = 60LL;
}


void __fastcall BlankEarthShortcutButtonOptionComponent___ctor(
        BlankEarthShortcutButtonOptionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall BlankEarthShortcutButtonOptionComponent__CheckUpdateText(
        BlankEarthShortcutButtonOptionComponent_o *this,
        BlankEarthSpotNavimenuEntity_o *ent,
        const MethodInfo *method)
{
  int64_t Time; // x0
  BlankEarthShortcutButtonOptionComponent_c *v5; // x8
  int64_t lastUpdatedTime; // x23
  int64_t v7; // x20
  int64_t v8; // x20
  int64_t OPTION_COMPONENT_UPDATE_INTERVAL; // x22

  if ( (byte_4A57CCB & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthShortcutButtonOptionComponent_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57CCB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v5 = BlankEarthShortcutButtonOptionComponent_TypeInfo;
  lastUpdatedTime = this->fields.lastUpdatedTime;
  v7 = Time;
  if ( !BlankEarthShortcutButtonOptionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonOptionComponent_TypeInfo);
    v5 = BlankEarthShortcutButtonOptionComponent_TypeInfo;
  }
  v8 = v7 - lastUpdatedTime;
  OPTION_COMPONENT_UPDATE_INTERVAL = v5->static_fields->OPTION_COMPONENT_UPDATE_INTERVAL;
  if ( v8 >= OPTION_COMPONENT_UPDATE_INTERVAL )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this->fields.lastUpdatedTime = NetworkManager__getTime(0LL);
  }
  return v8 >= OPTION_COMPONENT_UPDATE_INTERVAL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
        BlankEarthShortcutButtonOptionComponent_o *this,
        BlankEarthSpotNavimenuEntity_o *ent,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  UILabel_o *behindLabel; // x22
  System_String_o *v8; // x23
  int64_t v9; // x21
  int64_t messageClosedAt; // x20
  Il2CppObject *RestTime2; // x0
  struct UILabel_o *v12; // x8
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4A57CCA & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57CCA = 1;
  }
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !ent )
    goto LABEL_23;
  Time = (int64_t)BlankEarthSpotNavimenuEntity__GetMessageInfoCondCheck(ent, Time, 0LL);
  if ( !Time )
  {
    Time = (int64_t)this->fields.behindLabel;
    if ( Time )
    {
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
      if ( Time )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
        return;
      }
    }
    goto LABEL_23;
  }
  behindLabel = this->fields.behindLabel;
  v8 = *(System_String_o **)(Time + 16);
  v9 = Time;
  if ( *(_DWORD *)(Time + 40) == 1 )
  {
    messageClosedAt = ent->fields.messageClosedAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(messageClosedAt, -1LL, 0LL);
    Time = (int64_t)System_String__Format(v8, RestTime2, 0LL);
    if ( !behindLabel )
      goto LABEL_23;
    v8 = (System_String_o *)Time;
  }
  else if ( !behindLabel )
  {
    goto LABEL_23;
  }
  UILabel__set_text(behindLabel, v8, 0LL);
  Time = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v9 + 24), &v17, 0LL);
  v12 = this->fields.behindLabel;
  if ( (Time & 1) == 0 )
  {
    if ( v12 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
      goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(Time, v6);
  }
  if ( !v12 )
    goto LABEL_23;
  b = v17.fields.b;
  a = v17.fields.a;
  g = v17.fields.g;
  r = v17.fields.r;
LABEL_21:
  UIWidget__set_color((UIWidget_o *)this->fields.behindLabel, *(UnityEngine_Color_o *)&r, 0LL);
}