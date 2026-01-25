void BlankEarthShortcutButtonOptionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CEADC9 & 1) == 0 )
  {
    sub_1C7BAE8(&BlankEarthShortcutButtonOptionComponent_TypeInfo);
    byte_4CEADC9 = 1;
  }
  BlankEarthShortcutButtonOptionComponent_TypeInfo->static_fields->OPTION_COMPONENT_UPDATE_INTERVAL = 60;
}


void BlankEarthShortcutButtonOptionComponent___ctor(
        BlankEarthShortcutButtonOptionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool BlankEarthShortcutButtonOptionComponent__CheckUpdateText(
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

  if ( (byte_4CEADC8 & 1) == 0 )
  {
    sub_1C7BAE8(&BlankEarthShortcutButtonOptionComponent_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEADC8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
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
    this->fields.lastUpdatedTime = NetworkManager__getTime(0);
  }
  return v8 >= OPTION_COMPONENT_UPDATE_INTERVAL;
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
        BlankEarthShortcutButtonOptionComponent_o *this,
        BlankEarthSpotNavimenuEntity_o *ent,
        bool isInit,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v8; // x1
  UILabel_o *behindLabel; // x22
  System_String_o *v10; // x23
  int64_t v11; // x21
  int64_t messageClosedAt; // x20
  Il2CppObject *RestTime2; // x0
  struct UILabel_o *v14; // x8
  __int128 v15; // kr00_16 OVERLAPPED
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4CEADC7 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEADC7 = 1;
  }
  *(_QWORD *)&v16.fields.r = 0;
  *(_QWORD *)&v16.fields.b = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !ent )
    goto LABEL_24;
  Time = (int64_t)BlankEarthSpotNavimenuEntity__GetMessageInfoCondCheck(ent, Time, isInit, 0);
  if ( !Time )
  {
    if ( !isInit )
      return;
    Time = (int64_t)this->fields.behindLabel;
    if ( Time )
    {
      Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
      if ( Time )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
        return;
      }
    }
    goto LABEL_24;
  }
  behindLabel = this->fields.behindLabel;
  v10 = *(System_String_o **)(Time + 16);
  v11 = Time;
  if ( *(_DWORD *)(Time + 40) == 1 )
  {
    messageClosedAt = ent->fields.messageClosedAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(messageClosedAt, -1, 0);
    Time = (int64_t)System_String__Format(v10, RestTime2, 0);
    if ( !behindLabel )
      goto LABEL_24;
    v10 = (System_String_o *)Time;
  }
  else if ( !behindLabel )
  {
    goto LABEL_24;
  }
  UILabel__set_text(behindLabel, v10, 0);
  Time = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v11 + 24), &v16, 0);
  v14 = this->fields.behindLabel;
  if ( (Time & 1) == 0 )
  {
    if ( v14 )
    {
      *(_QWORD *)&v15 = __PAIR64__(1.0, 1.0);
      *((_QWORD *)&v15 + 1) = __PAIR64__(1.0, 1.0);
      goto LABEL_22;
    }
LABEL_24:
    sub_1C7BD40(Time, v8);
  }
  if ( !v14 )
    goto LABEL_24;
  *(_QWORD *)&v15 = *(_QWORD *)&v16.fields.b;
  *((_QWORD *)&v15 + 1) = *(_QWORD *)&v16.fields.r;
LABEL_22:
  UIWidget__set_color((UIWidget_o *)this->fields.behindLabel, *(UnityEngine_Color_o *)((char *)&v15 + 8), 0);
}