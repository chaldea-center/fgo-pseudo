void __fastcall BlankEarthShortcutButtonOptionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2AAC1 & 1) == 0 )
  {
    sub_1B761C0(&BlankEarthShortcutButtonOptionComponent_TypeInfo, v1);
    byte_4A2AAC1 = 1;
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
  __int64 v4; // x1
  int64_t Time; // x0
  BlankEarthShortcutButtonOptionComponent_c *v6; // x8
  int64_t lastUpdatedTime; // x23
  int64_t v8; // x20
  int64_t v9; // x20
  int64_t OPTION_COMPONENT_UPDATE_INTERVAL; // x22

  if ( (byte_4A2AAC0 & 1) == 0 )
  {
    sub_1B761C0(&BlankEarthShortcutButtonOptionComponent_TypeInfo, ent);
    sub_1B761C0(&NetworkManager_TypeInfo, v4);
    byte_4A2AAC0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = BlankEarthShortcutButtonOptionComponent_TypeInfo;
  lastUpdatedTime = this->fields.lastUpdatedTime;
  v8 = Time;
  if ( !BlankEarthShortcutButtonOptionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonOptionComponent_TypeInfo);
    v6 = BlankEarthShortcutButtonOptionComponent_TypeInfo;
  }
  v9 = v8 - lastUpdatedTime;
  OPTION_COMPONENT_UPDATE_INTERVAL = v6->static_fields->OPTION_COMPONENT_UPDATE_INTERVAL;
  if ( v9 >= OPTION_COMPONENT_UPDATE_INTERVAL )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this->fields.lastUpdatedTime = NetworkManager__getTime(0LL);
  }
  return v9 >= OPTION_COMPONENT_UPDATE_INTERVAL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
        BlankEarthShortcutButtonOptionComponent_o *this,
        BlankEarthSpotNavimenuEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t Time; // x0
  __int64 v7; // x1
  UILabel_o *behindLabel; // x22
  System_String_o *v9; // x23
  int64_t v10; // x21
  int64_t messageClosedAt; // x20
  Il2CppObject *RestTime2; // x0
  struct UILabel_o *v13; // x8
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4A2AABF & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, ent);
    sub_1B761C0(&NetworkManager_TypeInfo, v5);
    byte_4A2AABF = 1;
  }
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
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
  v9 = *(System_String_o **)(Time + 16);
  v10 = Time;
  if ( *(_DWORD *)(Time + 40) == 1 )
  {
    messageClosedAt = ent->fields.messageClosedAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(messageClosedAt, -1LL, 0LL);
    Time = (int64_t)System_String__Format(v9, RestTime2, 0LL);
    if ( !behindLabel )
      goto LABEL_23;
    v9 = (System_String_o *)Time;
  }
  else if ( !behindLabel )
  {
    goto LABEL_23;
  }
  UILabel__set_text(behindLabel, v9, 0LL);
  Time = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v10 + 24), &v18, 0LL);
  v13 = this->fields.behindLabel;
  if ( (Time & 1) == 0 )
  {
    if ( v13 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
      goto LABEL_21;
    }
LABEL_23:
    sub_1B7641C(Time, v7);
  }
  if ( !v13 )
    goto LABEL_23;
  b = v18.fields.b;
  a = v18.fields.a;
  g = v18.fields.g;
  r = v18.fields.r;
LABEL_21:
  UIWidget__set_color((UIWidget_o *)this->fields.behindLabel, *(UnityEngine_Color_o *)&r, 0LL);
}