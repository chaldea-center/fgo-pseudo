void __fastcall EventInfoUserEventPointControl___ctor(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  this->fields.isEnabledCondensedScale = 1;
  this->fields.animTime = 2.0;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void __fastcall EventInfoUserEventPointControl__Awake(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UserEventPointMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9AD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventPointMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E9AD4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct UserEventPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userEventPointMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


System_Collections_IEnumerator_o *__fastcall EventInfoUserEventPointControl__CountUpAnim(
        EventInfoUserEventPointControl_o *this,
        int64_t addCound,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9AD9 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo, addCound, (_DWORD)method, v3);
    byte_42E9AD9 = 1;
  }
  v6 = sub_B5D694(EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo);
  EventInfoUserEventPointControl__CountUpAnim_d__25___ctor(
    (EventInfoUserEventPointControl__CountUpAnim_d__25_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 32) = addCound;
  return (System_Collections_IEnumerator_o *)v6;
}


int64_t __fastcall EventInfoUserEventPointControl__GetUserEventPoint(
        EventInfoUserEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_42E9AD6 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, eventId, groupId, method);
    byte_42E9AD6 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


void __fastcall EventInfoUserEventPointControl__Initialization(
        EventInfoUserEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventUiEntity = entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventInfoUserEventPointControl__PlayAnim(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  int64_t currentTotalPoint; // x8
  int64_t oldTotalPoint_k__BackingField; // x9
  int64_t v5; // x20
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( this->fields.isActiveEffect )
  {
    currentTotalPoint = this->fields.currentTotalPoint;
    oldTotalPoint_k__BackingField = this->fields._oldTotalPoint_k__BackingField;
    v5 = currentTotalPoint - oldTotalPoint_k__BackingField;
    if ( currentTotalPoint > oldTotalPoint_k__BackingField )
    {
      EventInfoUserEventPointControl__PlayCountUpSe(this, method);
      v7 = EventInfoUserEventPointControl__CountUpAnim(this, v5, v6);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
    }
  }
}


void __fastcall EventInfoUserEventPointControl__PlayCountUpSe(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *countUpSEName; // x19
  System_String_array *v9; // x0
  System_String_array *v10; // x1
  int max_length; // w8
  System_String_array *v12; // x19
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  SePlayer_o *v15; // x0
  SePlayer_o *v16; // x20
  __int64 v17; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9ADA & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E9ADA = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(this->fields.countUpSEName, 0LL) )
  {
    countUpSEName = this->fields.countUpSEName;
    v9 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v9 )
      goto LABEL_22;
    v10 = v9;
    if ( !v9->max_length )
      goto LABEL_23;
    LOWORD(v9->m_Items[0]) = 58;
    if ( !countUpSEName )
      goto LABEL_22;
    v9 = System_String__Split(countUpSEName, (System_Char_array *)v9, 0LL);
    if ( !v9 )
      goto LABEL_22;
    max_length = v9->max_length;
    v12 = v9;
    if ( !max_length )
    {
LABEL_23:
      v17 = sub_B5D6C8(v9);
      sub_B5D668(v17, 0LL);
    }
    v13 = v9->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v13, 0LL);
      return;
    }
    v14 = v9->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v15 = SoundManager__playSe_23390804(v13, v14, 0LL);
    result = 0.0;
    if ( (int)v12->max_length >= 3 )
    {
      v16 = v15;
      v9 = (System_String_array *)System_Single__TryParse(v12->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        if ( v16 )
        {
          SePlayer__set_Pitch(v16, result, 0LL);
          return;
        }
LABEL_22:
        sub_B5D69C(v9, v10);
      }
    }
  }
}


void __fastcall EventInfoUserEventPointControl__Redisplay(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  EventInfoUserEventPointControl_o *v4; // x19
  struct EventUiValueEntity_array *eventUiValueEntityList; // x21
  __int64 v6; // x8
  __int64 v7; // x22
  int64_t v8; // x20
  EventUiValueEntity_o *v9; // x9
  const MethodInfo *v10; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  TerminalPramsManager_c *v12; // x0
  int64_t oldTotalPoint_k__BackingField; // x1
  EventInfoUserEventPointControl_o *v14; // x0
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42E9AD5 & 1) == 0 )
  {
    this = (EventInfoUserEventPointControl_o *)sub_B5D5C4(
                                                 &TerminalPramsManager_TypeInfo,
                                                 (_DWORD)method,
                                                 (_DWORD)v2,
                                                 v3);
    byte_42E9AD5 = 1;
  }
  eventUiValueEntityList = v4->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    v6 = *(_QWORD *)&eventUiValueEntityList->max_length;
    if ( (int)v6 < 1 )
    {
      v8 = 0LL;
    }
    else
    {
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        if ( (unsigned int)v7 >= (unsigned int)v6 )
        {
          v15 = sub_B5D6C8(this);
          sub_B5D668(v15, 0LL);
        }
        v9 = eventUiValueEntityList->m_Items[v7];
        if ( !v9 )
LABEL_28:
          sub_B5D69C(this, method);
        if ( v9->fields.type == 2 )
        {
          this = (EventInfoUserEventPointControl_o *)System_Int32__Parse(v9->fields.value, 0LL);
          eventUiEntity = v4->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_28;
          this = (EventInfoUserEventPointControl_o *)EventInfoUserEventPointControl__GetUserEventPoint(
                                                       v4,
                                                       eventUiEntity->fields.eventId,
                                                       (int32_t)this,
                                                       v10);
          v6 = *(_QWORD *)&eventUiValueEntityList->max_length;
          v8 += (int64_t)this;
        }
        ++v7;
      }
      while ( (int)v7 < (int)v6 );
    }
    if ( !v4->fields.isActiveEffect )
      goto LABEL_25;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E502A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
      byte_42E502A = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( v12->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      oldTotalPoint_k__BackingField = v4->fields._oldTotalPoint_k__BackingField;
      v14 = v4;
    }
    else
    {
LABEL_25:
      v14 = v4;
      oldTotalPoint_k__BackingField = v8;
    }
    EventInfoUserEventPointControl__SetPointLabel(v14, oldTotalPoint_k__BackingField, v2);
    v4->fields.currentTotalPoint = v8;
  }
}


void __fastcall EventInfoUserEventPointControl__SetBgSprite(
        EventInfoUserEventPointControl_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v10; // x21
  __int64 v11; // x1
  struct UISprite_o *v12; // x0

  if ( (byte_42E9AD8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spriteName, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9AD8 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(spriteName, 0LL) )
  {
    v10 = this->fields.bgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v10, spriteName, 0LL);
    v12 = this->fields.bgSprite;
    if ( !v12 )
      sub_B5D69C(0LL, v11);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
      v12,
      v12->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventInfoUserEventPointControl__SetPointLabel(
        EventInfoUserEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *v22; // x21
  System_String_o *v23; // x22
  BalanceConfig_c *v24; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  int64_t v29; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9AD7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, point, (_DWORD)method, v3);
    sub_B5D5C4(&long_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Math_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v18, v19, v20);
    byte_42E9AD7 = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v22 = this->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v24->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v29 = System_Math__Min_45149944(point, UserPointEventMax, 0LL);
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29);
    v27 = System_String__Format(v23, v26, 0LL);
    if ( !v22 )
      goto LABEL_21;
    UILabel__set_text(v22, v27, 0LL);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v27 = (System_String_o *)this->fields.pointLabel;
    if ( !v27 )
LABEL_21:
      sub_B5D69C(v27, v28);
    UILabel__SetCondensedScale((UILabel_o *)v27, this->fields.pointLabelWidth, 0LL);
  }
}


void __fastcall EventInfoUserEventPointControl__Setup(
        EventInfoUserEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x2

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)entitys,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    EventInfoUserEventPointControl__SetBgSprite(this, this->fields.bgSpriteName, v9);
    ((void (__fastcall *)(EventInfoUserEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SwitchSpotState.methodPtr);
  }
}


int64_t __fastcall EventInfoUserEventPointControl__get_oldTotalPoint(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  return this->fields._oldTotalPoint_k__BackingField;
}


void __fastcall EventInfoUserEventPointControl__set_oldTotalPoint(
        EventInfoUserEventPointControl_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._oldTotalPoint_k__BackingField = value;
}


void __fastcall EventInfoUserEventPointControl__CountUpAnim_d__25___ctor(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoUserEventPointControl__CountUpAnim_d__25__MoveNext(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct EventInfoUserEventPointControl_o *_4__this; // x20
  int64_t addCound; // x21
  __int64 targetFrameRate; // x0
  __int64 v7; // x1
  int v8; // w21
  int32_t i_5__3; // w8
  float v10; // s1
  double v11; // d1
  float v12; // s1
  double v13; // d0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int64_t currentTotalPoint; // x1

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    addCound = this->fields.addCound;
    this->fields.__1__state = -1;
    targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
    if ( _4__this )
    {
      this->fields._add_5__2 = (float)addCound / (float)(_4__this->fields.animTime * (float)(int)targetFrameRate);
      this->fields._i_5__3 = 0;
      LODWORD(targetFrameRate) = UnityEngine_Application__get_targetFrameRate(0LL);
      v8 = 0;
      goto LABEL_6;
    }
LABEL_16:
    sub_B5D69C(targetFrameRate, v7);
  }
  i_5__3 = this->fields._i_5__3;
  this->fields.__1__state = -1;
  v8 = i_5__3 + 1;
  this->fields._i_5__3 = i_5__3 + 1;
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  if ( !_4__this )
    goto LABEL_16;
LABEL_6:
  v10 = _4__this->fields.animTime * (float)(int)targetFrameRate;
  if ( v10 == INFINITY )
    v11 = -v10;
  else
    v11 = v10;
  if ( v8 >= (int)v11 )
  {
    currentTotalPoint = _4__this->fields.currentTotalPoint;
    _4__this->fields._oldTotalPoint_k__BackingField = currentTotalPoint;
    EventInfoUserEventPointControl__SetPointLabel(_4__this, currentTotalPoint, 0LL);
    return 0;
  }
  v12 = this->fields._add_5__2 * (float)this->fields._i_5__3;
  if ( v12 == INFINITY )
    v13 = -INFINITY;
  else
    v13 = v12;
  EventInfoUserEventPointControl__SetPointLabel(
    _4__this,
    _4__this->fields._oldTotalPoint_k__BackingField + (__int64)v13,
    0LL);
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall EventInfoUserEventPointControl__CountUpAnim_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoUserEventPointControl__CountUpAnim_d__25__System_Collections_IEnumerator_Reset(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoUserEventPointControl__CountUpAnim_d__25_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall EventInfoUserEventPointControl__CountUpAnim_d__25__System_Collections_IEnumerator_get_Current(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoUserEventPointControl__CountUpAnim_d__25__System_IDisposable_Dispose(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  ;
}