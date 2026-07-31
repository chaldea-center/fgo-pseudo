void BlankEarthShortcutButtonOptionComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5934D0E & 1) == 0 )
  {
    sub_21FFC50(&BlankEarthShortcutButtonOptionComponent_TypeInfo);
    byte_5934D0E = 1;
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
  __int64 v5; // x1
  __int64 v6; // x2
  BlankEarthShortcutButtonOptionComponent_c *v7; // x8
  int64_t lastUpdatedTime; // x23
  int64_t v9; // x20
  int64_t v10; // x20
  int64_t OPTION_COMPONENT_UPDATE_INTERVAL; // x22

  if ( (byte_5934D0D & 1) == 0 )
  {
    sub_21FFC50(&BlankEarthShortcutButtonOptionComponent_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934D0D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, ent, method);
  Time = NetworkManager__getTime(0);
  v7 = BlankEarthShortcutButtonOptionComponent_TypeInfo;
  lastUpdatedTime = this->fields.lastUpdatedTime;
  v9 = Time;
  if ( !*(&BlankEarthShortcutButtonOptionComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonOptionComponent_TypeInfo, v5, v6);
    v7 = BlankEarthShortcutButtonOptionComponent_TypeInfo;
  }
  v10 = v9 - lastUpdatedTime;
  OPTION_COMPONENT_UPDATE_INTERVAL = v7->static_fields->OPTION_COMPONENT_UPDATE_INTERVAL;
  if ( v10 >= OPTION_COMPONENT_UPDATE_INTERVAL )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    this->fields.lastUpdatedTime = NetworkManager__getTime(0);
  }
  return v10 >= OPTION_COMPONENT_UPDATE_INTERVAL;
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
  __int64 v9; // x2
  UILabel_o *behindLabel; // x22
  int64_t v11; // x21
  System_String_o *v12; // x23
  int64_t messageClosedAt; // x20
  Il2CppObject *RestTime2; // x0
  System_String_o *v15; // x1
  bool v16; // w8
  __int128 v17; // kr00_16 OVERLAPPED
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_5934D0C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934D0C = 1;
  }
  *(_QWORD *)&v18.fields.r = 0;
  *(_QWORD *)&v18.fields.b = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, ent, isInit);
  Time = NetworkManager__getTime(0);
  if ( !ent )
    goto LABEL_25;
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
    goto LABEL_25;
  }
  behindLabel = this->fields.behindLabel;
  v11 = Time;
  if ( *(_DWORD *)(Time + 40) == 1 )
  {
    v12 = *(System_String_o **)(Time + 16);
    messageClosedAt = ent->fields.messageClosedAt;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(messageClosedAt, -1, 0);
    Time = (int64_t)System_String__Format(v12, RestTime2, 0);
    if ( !behindLabel )
      goto LABEL_25;
    v15 = (System_String_o *)Time;
  }
  else
  {
    if ( !behindLabel )
      goto LABEL_25;
    v15 = *(System_String_o **)(Time + 16);
  }
  UILabel__set_text(behindLabel, v15, 0);
  v16 = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v11 + 24), &v18, 0);
  Time = (int64_t)this->fields.behindLabel;
  if ( !v16 )
  {
    if ( Time )
    {
      *(_QWORD *)&v17 = __PAIR64__(1.0, 1.0);
      *((_QWORD *)&v17 + 1) = __PAIR64__(1.0, 1.0);
      goto LABEL_23;
    }
LABEL_25:
    sub_21FFECC(Time, v8);
  }
  if ( !Time )
    goto LABEL_25;
  *(_QWORD *)&v17 = *(_QWORD *)&v18.fields.b;
  *((_QWORD *)&v17 + 1) = *(_QWORD *)&v18.fields.r;
LABEL_23:
  UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)((char *)&v17 + 8), 0);
}