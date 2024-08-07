void __fastcall EventInfoUserEventPointControl___ctor(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  this->fields.isEnabledCondensedScale = 1;
  this->fields.animTime = 2.0;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void __fastcall EventInfoUserEventPointControl__Awake(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00CD7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    byte_4A00CD7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.userEventPointMaster, (int32_t)Master_object, v5, v6);
}


System_Collections_IEnumerator_o *__fastcall EventInfoUserEventPointControl__CountUpAnim(
        EventInfoUserEventPointControl_o *this,
        int64_t addCound,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A00CDC & 1) == 0 )
  {
    sub_1B64A00(&EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo, addCound);
    byte_4A00CDC = 1;
  }
  v5 = sub_1B64C4C(EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = addCound;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoUserEventPointControl__GetUserEventPoint(
        EventInfoUserEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x1

  if ( (byte_4A00CD9 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A00CD9 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


void __fastcall EventInfoUserEventPointControl__Initialization(
        EventInfoUserEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.eventUiEntity = entity;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
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
      UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
    }
  }
}


void __fastcall EventInfoUserEventPointControl__PlayCountUpSe(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *countUpSEName; // x0
  int v5; // w8
  System_String_o **v6; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  SePlayer_o *v9; // x0
  SePlayer_o *v10; // x20
  float result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A00CDD & 1) == 0 )
  {
    sub_1B64A00(&SoundManager_TypeInfo, method);
    byte_4A00CDD = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.countUpSEName, 0LL) )
  {
    countUpSEName = this->fields.countUpSEName;
    if ( !countUpSEName )
      goto LABEL_18;
    countUpSEName = System_String__Split((System_String_o *)countUpSEName, 0x3Au, 0, 0LL);
    if ( !countUpSEName )
      goto LABEL_18;
    v5 = *((_DWORD *)countUpSEName + 6);
    v6 = (System_String_o **)countUpSEName;
    if ( !v5 )
      sub_1B64C64(countUpSEName, v3);
    v7 = (System_String_o *)*((_QWORD *)countUpSEName + 4);
    if ( v5 < 2 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playSe(v7, 0LL);
      return;
    }
    v8 = (System_String_o *)*((_QWORD *)countUpSEName + 5);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    v9 = SoundManager__playSe_38389628(v7, v8, 0LL);
    result = 0.0;
    if ( *((int *)v6 + 6) >= 3 )
    {
      v10 = v9;
      countUpSEName = (void *)System_Single__TryParse(v6[6], &result, 0LL);
      if ( ((unsigned __int8)countUpSEName & 1) != 0 )
      {
        if ( v10 )
        {
          SePlayer__set_Pitch(v10, result, 0LL);
          return;
        }
LABEL_18:
        sub_1B64C5C(countUpSEName, v3);
      }
    }
  }
}


void __fastcall EventInfoUserEventPointControl__Redisplay(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoUserEventPointControl_o *v3; // x19
  struct EventUiValueEntity_array *eventUiValueEntityList; // x21
  __int64 v5; // x8
  __int64 v6; // x22
  int64_t v7; // x20
  EventUiValueEntity_o *v8; // x9
  const MethodInfo *v9; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t oldTotalPoint_k__BackingField; // x1
  TerminalPramsManager_c *v12; // x0

  v3 = this;
  if ( (byte_4A00CD8 & 1) == 0 )
  {
    this = (EventInfoUserEventPointControl_o *)sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_4A00CD8 = 1;
  }
  eventUiValueEntityList = v3->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    v5 = *(_QWORD *)&eventUiValueEntityList->max_length;
    if ( (int)v5 < 1 )
    {
      v7 = 0LL;
    }
    else
    {
      v6 = 0LL;
      v7 = 0LL;
      do
      {
        if ( (unsigned int)v6 >= (unsigned int)v5 )
          sub_1B64C64(this, method);
        v8 = eventUiValueEntityList->m_Items[v6];
        if ( !v8 )
LABEL_25:
          sub_1B64C5C(this, method);
        if ( v8->fields.type == 2 )
        {
          this = (EventInfoUserEventPointControl_o *)System_Int32__Parse(v8->fields.value, 0LL);
          eventUiEntity = v3->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_25;
          this = (EventInfoUserEventPointControl_o *)EventInfoUserEventPointControl__GetUserEventPoint(
                                                       v3,
                                                       eventUiEntity->fields.eventId,
                                                       (int32_t)this,
                                                       v9);
          v5 = *(_QWORD *)&eventUiValueEntityList->max_length;
          v7 += (int64_t)this;
        }
        ++v6;
      }
      while ( (int)v6 < (int)v5 );
    }
    oldTotalPoint_k__BackingField = v7;
    if ( v3->fields.isActiveEffect )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FD796 )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, oldTotalPoint_k__BackingField);
        byte_49FD796 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      oldTotalPoint_k__BackingField = v7;
      if ( v12->static_fields->_isPlayRiverActionCheck_k__BackingField )
        oldTotalPoint_k__BackingField = v3->fields._oldTotalPoint_k__BackingField;
    }
    EventInfoUserEventPointControl__SetPointLabel(v3, oldTotalPoint_k__BackingField, v2);
    v3->fields.currentTotalPoint = v7;
  }
}


void __fastcall EventInfoUserEventPointControl__SetBgSprite(
        EventInfoUserEventPointControl_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *bgSprite; // x21
  UISprite_o *v7; // x21
  __int64 v8; // x1
  struct UISprite_o *v9; // x0

  if ( (byte_4A00CDB & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, spriteName);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A00CDB = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(spriteName, 0LL) )
  {
    v7 = this->fields.bgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v7, spriteName, 0LL);
    v9 = this->fields.bgSprite;
    if ( !v9 )
      sub_1B64C5C(0LL, v8);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
      v9,
      v9->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventInfoUserEventPointControl__SetPointLabel(
        EventInfoUserEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *v11; // x21
  System_String_o *v12; // x22
  BalanceConfig_c *v13; // x8
  int64_t UserPointEventMax; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A00CDA & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, point);
    sub_1B64A00(&long_TypeInfo, v5);
    sub_1B64A00(&LocalizationManager_TypeInfo, v6);
    sub_1B64A00(&System_Math_TypeInfo, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_5619/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    byte_4A00CDA = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0LL, 0LL) )
  {
    v11 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v13->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = System_Math__Min_62204116(point, UserPointEventMax, 0LL);
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v15, v16, v17);
    v19 = System_String__Format(v12, v18, 0LL);
    if ( !v11 )
      goto LABEL_17;
    UILabel__set_text(v11, v19, 0LL);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v19 = (System_String_o *)this->fields.pointLabel;
    if ( !v19 )
LABEL_17:
      sub_1B64C5C(v19, v20);
    UILabel__SetCondensedScale((UILabel_o *)v19, this->fields.pointLabelWidth, 0LL);
  }
}


void __fastcall EventInfoUserEventPointControl__Setup(
        EventInfoUserEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x2

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (int32_t)method,
      v3);
    EventInfoUserEventPointControl__SetBgSprite(this, this->fields.bgSpriteName, v5);
    ((void (__fastcall *)(EventInfoUserEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SetUIDisp.methodPtr);
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
  int64_t addCound; // x23
  __int64 targetFrameRate; // x0
  __int64 v7; // x1
  int v8; // w22
  int32_t i_5__3; // w8
  const MethodInfo *v10; // x2
  float v11; // s0
  int v12; // w8
  float v13; // s0
  __int64 v14; // x8
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  bool result; // w0
  int64_t currentTotalPoint; // x1

  if ( (byte_4A00CDE & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Application_TypeInfo, method);
    byte_4A00CDE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = this->fields._i_5__3;
    this->fields.__1__state = -1;
    v8 = i_5__3 + 1;
    this->fields._i_5__3 = i_5__3 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    addCound = this->fields.addCound;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
    if ( !_4__this )
LABEL_21:
      sub_1B64C5C(targetFrameRate, v7);
    v8 = 0;
    this->fields._add_5__2 = (float)addCound / (float)(_4__this->fields.animTime * (float)(int)targetFrameRate);
    this->fields._i_5__3 = 0;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  if ( !_4__this )
    goto LABEL_21;
  v11 = _4__this->fields.animTime * (float)(int)targetFrameRate;
  v12 = (int)v11;
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  if ( v8 >= v12 )
  {
    currentTotalPoint = _4__this->fields.currentTotalPoint;
    _4__this->fields._oldTotalPoint_k__BackingField = currentTotalPoint;
    EventInfoUserEventPointControl__SetPointLabel(_4__this, currentTotalPoint, v10);
    return 0;
  }
  v13 = this->fields._add_5__2 * (float)this->fields._i_5__3;
  v14 = (__int64)v13;
  if ( v13 == INFINITY )
    v14 = 0x8000000000000000LL;
  EventInfoUserEventPointControl__SetPointLabel(_4__this, v14 + _4__this->fields._oldTotalPoint_k__BackingField, v10);
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p__2__current, 0, v16, v17);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_EventInfoUserEventPointControl__CountUpAnim_d__25_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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