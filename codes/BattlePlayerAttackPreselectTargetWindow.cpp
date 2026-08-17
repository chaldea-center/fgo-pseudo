void BattlePlayerAttackPreselectTargetWindow___ctor(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  this->fields.selectedUniqueId = -1;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePlayerAttackPreselectTargetWindow__ApplyDecideButtonState(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *decideButton; // x21
  const MethodInfo *v6; // x1
  BattlePlayerAttackPreselectTargetWindow_o *v7; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  struct UIButton_o *v10; // x0
  struct UIButton_o *v11; // x8
  struct UIButton_o *v12; // x8

  if ( (byte_5974138 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974138 = 1;
  }
  decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnabled);
  if ( !UnityEngine_Object__op_Equality(decideButton, 0, 0) )
  {
    BattlePlayerAttackPreselectTargetWindow__CacheDecideButtonColors(this, v6);
    BattlePlayerAttackPreselectTargetWindow__SetButtonColliderEnabled(v7, this->fields.decideButton, 1, v8);
    v10 = this->fields.decideButton;
    if ( !v10 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10, 1, 0);
    if ( isEnabled )
    {
      BattlePlayerAttackPreselectTargetWindow__RestoreDecideButtonColors(this, v9);
    }
    else
    {
      v10 = this->fields.decideButton;
      if ( !v10 )
        goto LABEL_16;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)v10, v10->fields.disabledColor, 0);
      v11 = this->fields.decideButton;
      if ( !v11 )
        goto LABEL_16;
      v11->fields.hover = v11->fields.disabledColor;
      v12 = this->fields.decideButton;
      if ( !v12 )
        goto LABEL_16;
      v12->fields.pressed = v12->fields.disabledColor;
    }
    v10 = this->fields.decideButton;
    if ( v10 )
    {
      v10->klass->vtable._14_SetState.methodPtr();
      v10 = this->fields.decideButton;
      if ( v10 )
      {
        UIButtonColor__UpdateColor((UIButtonColor_o *)v10, 1, 0);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(v10, v9);
  }
}


void BattlePlayerAttackPreselectTargetWindow__CacheDecideButtonColors(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *decideButton; // x20
  __int64 v4; // x1
  UIButtonColor_o *v5; // x0
  struct UIButton_o *v6; // x8
  struct UnityEngine_Color_o pressed; // q0
  UnityEngine_Color_o defaultColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974139 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974139 = 1;
  }
  if ( !this->fields.hasDecideButtonColorCache )
  {
    decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(decideButton, 0, 0) )
    {
      v5 = (UIButtonColor_o *)this->fields.decideButton;
      if ( !v5
        || (defaultColor = UIButtonColor__get_defaultColor(v5, 0),
            v6 = this->fields.decideButton,
            this->fields.decideButtonDefaultColor = defaultColor,
            !v6) )
      {
        sub_2213CDC(v5, v4);
      }
      this->fields.decideButtonHoverColor = v6->fields.hover;
      pressed = v6->fields.pressed;
      this->fields.hasDecideButtonColorCache = 1;
      this->fields.decideButtonPressedColor = pressed;
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__CompleteSelection(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleSelectServantWindow_SelectServantCallBack_o **p_selectCallBack; // x0
  struct BattleSelectServantWindow_SelectServantCallBack_o *v10; // x20
  struct BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // t1

  if ( !this->fields.isSelectionCompleted )
  {
    selectCallBack = this->fields.selectCallBack;
    p_selectCallBack = &this->fields.selectCallBack;
    v10 = selectCallBack;
    *((_BYTE *)p_selectCallBack + 69) = 1;
    *p_selectCallBack = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_selectCallBack, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( selectCallBack )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        (unsigned int)uniqueId,
        v10->fields.method);
  }
}


bool BattlePlayerAttackPreselectTargetWindow__ExistsServant(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_597412B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleServantData___);
    byte_597412B = 1;
  }
  return BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.servantList,
           index,
           0,
           (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleServantData___) != 0;
}


float BattlePlayerAttackPreselectTargetWindow__GetCenteredServantButtonPositionX(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        int32_t displayIndex,
        int32_t displayServantCount,
        const MethodInfo *method)
{
  return (float)((float)displayIndex + (float)((float)(displayServantCount - 1) * -0.5)) * 250.0;
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__GetDescriptionText(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *SkillDescriptionTextKey; // x20
  __int64 v5; // x1
  bool v6; // w8
  int v7; // w9
  System_String_o *v8; // x0
  System_String_o *v10; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *SourceSkillName; // x21
  const MethodInfo *v13; // x1
  Il2CppObject *SourceSkillDetail; // x2

  if ( (byte_597412F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10819/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT"*/);
    sub_2213A60(&StringLiteral_10820/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_INVALID"*/);
    byte_597412F = 1;
  }
  if ( !this->fields.sourceSkillId || this->fields.sourceSkillLv <= 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v8 = (System_String_o *)StringLiteral_10820/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_INVALID"*/;
    return LocalizationManager__Get(v8, 0);
  }
  SkillDescriptionTextKey = BattlePlayerAttackPreselectTargetWindow__GetSkillDescriptionTextKey(this, method);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
  v6 = LocalizationManager__ContainsKey(SkillDescriptionTextKey, 0);
  v7 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v6 )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    v8 = SkillDescriptionTextKey;
    return LocalizationManager__Get(v8, 0);
  }
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10819/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT"*/, 0);
  SourceSkillName = (Il2CppObject *)BattlePlayerAttackPreselectTargetWindow__GetSourceSkillName(this, v11);
  SourceSkillDetail = (Il2CppObject *)BattlePlayerAttackPreselectTargetWindow__GetSourceSkillDetail(this, v13);
  return System_String__Format_75697880(v10, SourceSkillName, SourceSkillDetail, 0);
}


int32_t BattlePlayerAttackPreselectTargetWindow__GetDisplayServantCount(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  BattlePlayerAttackPreselectTargetWindow_o *v2; // x19
  struct UIButton_array *servantButtonList; // x8
  unsigned __int64 v4; // x20
  int32_t v5; // w21
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v7; // x22
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_597412A & 1) == 0 )
  {
    this = (BattlePlayerAttackPreselectTargetWindow_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597412A = 1;
  }
  servantButtonList = v2->fields.servantButtonList;
  if ( !servantButtonList )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(servantButtonList->max_length);
    if ( (__int64)v4 >= (int)max_length_low )
      break;
    if ( v4 >= max_length_low )
      sub_2213CE4(this);
    v7 = (UnityEngine_Object_o *)servantButtonList->m_Items[v4];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePlayerAttackPreselectTargetWindow_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattlePlayerAttackPreselectTargetWindow_o *)BattlePlayerAttackPreselectTargetWindow__ExistsServant(
                                                            v2,
                                                            v4,
                                                            v8);
      v5 += (unsigned __int8)this & 1;
    }
    servantButtonList = v2->fields.servantButtonList;
    ++v4;
    if ( !servantButtonList )
      sub_2213CDC(this, method);
  }
  return v5;
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__GetSkillDescriptionTextKey(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t sourceSkillId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5974130 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10821/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_{0}"*/);
    byte_5974130 = 1;
  }
  sourceSkillId = this->fields.sourceSkillId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &sourceSkillId);
  return System_String__Format((System_String_o *)StringLiteral_10821/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_{0}"*/, v3, 0);
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__GetSourceSkillDetail(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  SkillLvEntity_o *Entity; // x0
  __int64 v6; // x1
  LocalizationManager_c *v8; // x0

  if ( (byte_5974132 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5974132 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  Entity = SkillLvMaster__GetEntity(
             (SkillLvMaster_o *)Master_object,
             this->fields.sourceSkillId,
             this->fields.sourceSkillLv,
             0);
  if ( Entity )
    return SkillLvEntity__getDetail_49901180(Entity, this->fields.sourceSkillLv, 0, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v8 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager_TypeInfo;
  }
  return v8->static_fields->unknownNameText;
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__GetSourceSkillName(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  __int64 v6; // x1
  LocalizationManager_c *v8; // x0

  if ( (byte_5974131 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5974131 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.sourceSkillId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v8 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager_TypeInfo;
  }
  return v8->static_fields->unknownNameText;
}


void BattlePlayerAttackPreselectTargetWindow__Initialize(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  UIButton_o *decideButton; // x20
  EventDelegate_Callback_o *v6; // x21
  BattlePlayerAttackPreselectTargetWindow_o *v7; // x0
  const MethodInfo *v8; // x3
  UIButton_o *closeButton; // x20
  EventDelegate_Callback_o *v10; // x21
  BattlePlayerAttackPreselectTargetWindow_o *v11; // x0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_5974125 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    sub_2213A60(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    byte_5974125 = 1;
  }
  if ( !this->fields.isInitialized )
  {
    BattlePlayerAttackPreselectTargetWindow__SetupDecideButtonTextSprite(this, method);
    BattlePlayerAttackPreselectTargetWindow__UpdateText(this, v3);
    BattlePlayerAttackPreselectTargetWindow__InitializeServantButtons(this, v4);
    decideButton = this->fields.decideButton;
    v6 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__,
      0);
    BattlePlayerAttackPreselectTargetWindow__InitializeButton(v7, decideButton, v6, v8);
    closeButton = this->fields.closeButton;
    v10 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__,
      0);
    BattlePlayerAttackPreselectTargetWindow__InitializeButton(v11, closeButton, v10, v12);
    BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(this, v13);
    BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(this, v14);
    this->fields.isInitialized = 1;
  }
}


void BattlePlayerAttackPreselectTargetWindow__InitializeButton(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        UIButton_o *button,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x21
  int32_t size; // w2
  int v10; // w8
  EventDelegate_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct EventDelegate_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  if ( (byte_597412D & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597412D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, button);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0);
  if ( !v6 )
  {
    if ( !button )
      goto LABEL_15;
    onClick = button->fields.onClick;
    if ( !onClick )
      goto LABEL_15;
    size = onClick->fields._size;
    v10 = onClick->fields._version + 1;
    onClick->fields._size = 0;
    onClick->fields._version = v10;
    if ( size >= 1 )
    {
      System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
      onClick = button->fields.onClick;
    }
    v11 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor_56337280(v11, callback, 0);
    if ( !onClick
      || (items = onClick->fields._items,
          v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onClick->fields._version,
          !items) )
    {
LABEL_15:
      sub_2213CDC(v6, v7);
    }
    v20 = onClick->fields._size;
    if ( (unsigned int)v20 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)onClick,
        (Il2CppObject *)v11,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + v20;
      onClick->fields._size = v20 + 1;
      v21[4] = (Il2CppClass *)v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v11, v12, v13, v14, v15, v16, v17);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__InitializeServantButtons(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  struct UIButton_array *servantButtonList; // x8
  unsigned __int64 v4; // x26
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UIButton_array *v14; // x8
  UIButton_o *v15; // x21
  EventDelegate_Callback_o *v16; // x22
  BattlePlayerAttackPreselectTargetWindow_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_597412C & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0__InitializeServantButtons_b__0__);
    sub_2213A60(&BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0_TypeInfo);
    byte_597412C = 1;
  }
  servantButtonList = this->fields.servantButtonList;
  if ( servantButtonList )
  {
    v4 = 0;
    while ( (__int64)v4 < SLODWORD(servantButtonList->max_length) )
    {
      v5 = sub_2213CCC(BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 24) = this;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
        v14 = this->fields.servantButtonList;
        *(_DWORD *)(v5 + 16) = v4;
        if ( v14 )
        {
          if ( v4 >= LODWORD(v14->max_length) )
            sub_2213CE4(v6);
          v15 = v14->m_Items[v4];
          v16 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v16,
            (Il2CppObject *)v5,
            Method_BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0__InitializeServantButtons_b__0__,
            0);
          BattlePlayerAttackPreselectTargetWindow__InitializeButton(v17, v15, v16, v18);
          servantButtonList = this->fields.servantButtonList;
          ++v4;
          if ( servantButtonList )
            continue;
        }
      }
      sub_2213CDC(v6, v7);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__OnClickCloseButton(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5974135 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    byte_5974135 = 1;
  }
  if ( !this->fields.isSelectionCompleted )
  {
    v3 = Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 12, 0, 0);
    BattlePlayerAttackPreselectTargetWindow__CompleteSelection(this, -1, v5);
  }
}


void BattlePlayerAttackPreselectTargetWindow__OnClickDecideButton(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5974134 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__);
    byte_5974134 = 1;
  }
  if ( !this->fields.isSelectionCompleted )
  {
    if ( this->fields.selectedUniqueId < 0 )
    {
      BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(this, method);
    }
    else
    {
      v3 = Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__;
      if ( (*((_BYTE *)Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
      BattlePlayerAttackPreselectTargetWindow__CompleteSelection(this, this->fields.selectedUniqueId, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePlayerAttackPreselectTargetWindow__Open(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        BattleServantData_array *servantList,
        int32_t sourceSkillId,
        int32_t sourceSkillLv,
        BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v12; // x2

  this->fields.selectCallBack = selectCallBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallBack,
    (int32_t)selectCallBack,
    *(System_String_o **)&sourceSkillId,
    *(System_String_o **)&sourceSkillLv,
    (int32_t)selectCallBack,
    (int32_t)method,
    v6,
    v7);
  this->fields.sourceSkillId = sourceSkillId;
  this->fields.sourceSkillLv = sourceSkillLv;
  BattlePlayerAttackPreselectTargetWindow__SetServantData(this, servantList, v12);
  ((void (__fastcall *)(BattlePlayerAttackPreselectTargetWindow_o *, _QWORD, const MethodInfo *))this->klass->vtable._10_Open.methodPtr)(
    this,
    0,
    this->klass->vtable._10_Open.method);
}


void BattlePlayerAttackPreselectTargetWindow__Open_54701724(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  BattleWindowOuterClickComponent_OuterClickCall_o *v6; // x20

  if ( (byte_5974127 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    sub_2213A60(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_5974127 = 1;
  }
  this->fields.isSelectionCompleted = 0;
  this->fields.selectedUniqueId = -1;
  BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(this, (const MethodInfo *)call);
  BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(this, v5);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v6 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_2213CCC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__,
    0);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack((BattleWindowOuterClickManagerComponent_o *)this, v6, 0);
}


void BattlePlayerAttackPreselectTargetWindow__RestoreDecideButtonColors(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *decideButton; // x20
  __int64 v4; // x1
  UIButtonColor_o *v5; // x0
  struct UIButton_o *v6; // x8
  struct UIButton_o *v7; // x8

  if ( (byte_597413A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597413A = 1;
  }
  if ( this->fields.hasDecideButtonColorCache )
  {
    decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(decideButton, 0, 0) )
    {
      v5 = (UIButtonColor_o *)this->fields.decideButton;
      if ( !v5
        || (UIButtonColor__set_defaultColor(v5, this->fields.decideButtonDefaultColor, 0),
            (v6 = this->fields.decideButton) == 0)
        || (v6->fields.hover = this->fields.decideButtonHoverColor, (v7 = this->fields.decideButton) == 0) )
      {
        sub_2213CDC(v5, v4);
      }
      v7->fields.pressed = this->fields.decideButtonPressedColor;
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__SelectCommon(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleServantData_array *servantList; // x8
  BattleServantData_o *v6; // x8
  _BYTE *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_5974133 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePlayerAttackPreselectTargetWindow_SelectCommon__);
    byte_5974133 = 1;
  }
  if ( (index & 0x80000000) == 0 )
  {
    servantList = this->fields.servantList;
    if ( servantList )
    {
      if ( SLODWORD(servantList->max_length) > index )
      {
        v6 = servantList->m_Items[index];
        if ( v6 )
        {
          v7 = Method_BattlePlayerAttackPreselectTargetWindow_SelectCommon__;
          this->fields.selectedUniqueId = v6->fields.uniqueId;
          if ( (v7[83] & 2) != 0 )
            v7 = (_BYTE *)sub_2213A78(v7);
          v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, *((_QWORD *)v7 + 4));
          OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
          BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(this, v9);
          BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(this, v10);
        }
      }
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__SetButtonColliderEnabled(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        UIButton_o *button,
        bool isEnabled,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x21
  __int64 v10; // x1
  Il2CppObject *v11; // x20

  if ( (byte_597413B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597413B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, button);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0);
  if ( !v6 )
  {
    if ( !button )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)button,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v6 )
    {
      if ( !Component_object )
        goto LABEL_18;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnabled, 0);
    }
    v11 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)button,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
    if ( v6 )
    {
      if ( v11 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, isEnabled, 0);
        return;
      }
LABEL_18:
      sub_2213CDC(v6, v7);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__SetServantData(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        BattleServantData_array *servantList,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  __int64 gameObject; // x0
  const MethodInfo *v12; // x1
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v14; // x25
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 v17; // x8
  Il2CppClass **v18; // x23
  BattleServantData_o **v19; // x23
  Il2CppClass *v20; // x24
  Il2CppClass *v21; // t1
  BattleServantData_o *v22; // x24
  unsigned int *v23; // x28
  int32_t DispImageSvtId; // w23
  __int64 v25; // x1
  int32_t DispLimitCount; // w24
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x22
  __int64 v34; // x1
  unsigned int *v35; // x0
  struct UITexture_array *v36; // x8
  UnityEngine_Transform_o *v37; // x22
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  __int64 v40; // x0

  if ( (byte_5974128 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_5974128 = 1;
  }
  this->fields.servantList = servantList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantList,
    (int32_t)servantList,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattlePlayerAttackPreselectTargetWindow__UpdateText(this, v10);
  servantTop = this->fields.servantTop;
  if ( servantTop )
  {
    v14 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(servantTop->max_length);
      if ( (__int64)v14 >= (int)max_length_low )
        break;
      if ( v14 >= max_length_low )
        goto LABEL_39;
      v16 = (UnityEngine_Object_o *)servantTop->m_Items[v14];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      gameObject = UnityEngine_Object__op_Equality(v16, 0, 0);
      if ( (gameObject & 1) == 0 )
      {
        if ( servantList && (v17 = LODWORD(servantList->max_length), (__int64)v14 < (int)v17) )
        {
          if ( v14 >= v17 )
            goto LABEL_39;
          if ( !v16 )
            goto LABEL_36;
          v18 = &servantList->obj.klass + v14;
          v21 = v18[4];
          v19 = (BattleServantData_o **)(v18 + 4);
          v20 = v21;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
          if ( !gameObject )
            goto LABEL_36;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v20 != 0, 0);
          if ( v20 )
          {
            if ( v14 >= LODWORD(servantList->max_length) )
              goto LABEL_39;
            v22 = *v19;
            if ( !*v19 )
              goto LABEL_36;
            v23 = (unsigned int *)this->fields.servantTop;
            DispImageSvtId = BattleServantData__GetDispImageSvtId(*v19, 0);
            DispLimitCount = BattleServantData__getDispLimitCount(v22, 1, 0);
            if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v25);
            gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(
                                    (UITexture_o *)v16,
                                    DispImageSvtId,
                                    DispLimitCount,
                                    0);
            if ( !v23 )
              goto LABEL_36;
            v33 = gameObject;
            if ( gameObject )
            {
              gameObject = sub_2213BB4(gameObject, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
              if ( !gameObject )
              {
                v40 = sub_2213D00(0, v34);
                sub_2213BA0(v40, 0);
              }
            }
            if ( v14 >= v23[6] )
              goto LABEL_39;
            v35 = &v23[2 * v14];
            *((_QWORD *)v35 + 4) = v33;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 8), v33, v27, v28, v29, v30, v31, v32);
            v36 = this->fields.servantTop;
            if ( !v36 )
              goto LABEL_36;
            if ( v14 >= LODWORD(v36->max_length) )
LABEL_39:
              sub_2213CE4(gameObject);
            gameObject = (__int64)v36->m_Items[v14];
            if ( !gameObject )
              goto LABEL_36;
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_36;
            gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
            v37 = (UnityEngine_Transform_o *)gameObject;
            if ( !byte_5969AE5 )
            {
              gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE5 = 1;
            }
            if ( !v37 )
LABEL_36:
              sub_2213CDC(gameObject, v12);
            UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          }
        }
        else
        {
          if ( !v16 )
            goto LABEL_36;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
          if ( !gameObject )
            goto LABEL_36;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
      }
      servantTop = this->fields.servantTop;
      ++v14;
      if ( !servantTop )
        goto LABEL_36;
    }
    BattlePlayerAttackPreselectTargetWindow__UpdateServantButtonPositions(this, v12);
    this->fields.selectedUniqueId = -1;
    BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(this, v38);
    BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(this, v39);
  }
}


void BattlePlayerAttackPreselectTargetWindow__SetupDecideButtonTextSprite(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *decideButtonTextSprite; // x20
  __int64 v4; // x1
  BattleDataDefine_c *v5; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  __int64 v7; // x1
  UISprite_o *v8; // x0
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974126 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_18392/*"btn_txt_target_select"*/);
    byte_5974126 = 1;
  }
  decideButtonTextSprite = (UnityEngine_Object_o *)this->fields.decideButtonTextSprite;
  atlas = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(decideButtonTextSprite, 0, 0) )
  {
    v5 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v4);
      v5 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/, 0) )
    {
      v8 = this->fields.decideButtonTextSprite;
      if ( !v8 || (UISprite__set_atlas(v8, atlas, 0), (v8 = this->fields.decideButtonTextSprite) == 0) )
        sub_2213CDC(v8, v7);
      UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_18392/*"btn_txt_target_select"*/, 0);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *decideButton; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5974137 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974137 = 1;
  }
  decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(decideButton, 0, 0) )
    BattlePlayerAttackPreselectTargetWindow__ApplyDecideButtonState(this, this->fields.selectedUniqueId >= 0, v4);
}


void BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  BattlePlayerAttackPreselectTargetWindow_o *v2; // x19
  struct UISprite_array *selectIconList; // x8
  __int64 v4; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x20
  struct BattleServantData_array *servantList; // x8
  unsigned __int64 v9; // x9
  __int64 v10; // x8
  bool v11; // w21

  v2 = this;
  if ( (byte_5974136 & 1) == 0 )
  {
    this = (BattlePlayerAttackPreselectTargetWindow_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974136 = 1;
  }
  selectIconList = v2->fields.selectIconList;
  if ( selectIconList )
  {
    v4 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(selectIconList->max_length);
      v6 = v4 - 4;
      if ( v4 - 4 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        goto LABEL_22;
      v7 = (UnityEngine_Object_o *)*((_QWORD *)&selectIconList->obj.klass + v4);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattlePlayerAttackPreselectTargetWindow_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        servantList = v2->fields.servantList;
        if ( !servantList )
          goto LABEL_15;
        v9 = LODWORD(servantList->max_length);
        if ( (__int64)v6 >= (int)v9 )
          goto LABEL_15;
        if ( v6 >= v9 )
LABEL_22:
          sub_2213CE4(this);
        v10 = *((_QWORD *)&servantList->obj.klass + v4);
        if ( v10 )
          v11 = *(_DWORD *)(v10 + 24) == v2->fields.selectedUniqueId;
        else
LABEL_15:
          v11 = 0;
        if ( !v7
          || (this = (BattlePlayerAttackPreselectTargetWindow_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v7,
                                                                    0)) == 0 )
        {
LABEL_20:
          sub_2213CDC(this, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11, 0);
      }
      selectIconList = v2->fields.selectIconList;
      ++v4;
      if ( !selectIconList )
        goto LABEL_20;
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__UpdateServantButtonPositions(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DisplayServantCount; // x0
  __int64 v4; // x1
  struct UIButton_array *servantButtonList; // x8
  unsigned __int64 v6; // x20
  int v7; // w23
  float v8; // s8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v10; // x21
  const MethodInfo *v11; // x2
  char v12; // w22
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974129 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974129 = 1;
  }
  if ( this->fields.servantButtonList )
  {
    DisplayServantCount = (UnityEngine_GameObject_o *)BattlePlayerAttackPreselectTargetWindow__GetDisplayServantCount(
                                                        this,
                                                        method);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
LABEL_18:
      sub_2213CDC(DisplayServantCount, v4);
    v6 = 0;
    v7 = 0;
    v8 = vcvts_n_f32_s32((_DWORD)DisplayServantCount - 1, 1u);
    while ( 1 )
    {
      max_length_low = LODWORD(servantButtonList->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        sub_2213CE4(DisplayServantCount);
      v10 = (UnityEngine_Object_o *)servantButtonList->m_Items[v6];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      DisplayServantCount = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( ((unsigned __int8)DisplayServantCount & 1) == 0 )
      {
        DisplayServantCount = (UnityEngine_GameObject_o *)BattlePlayerAttackPreselectTargetWindow__ExistsServant(
                                                            this,
                                                            v6,
                                                            v11);
        if ( !v10 )
          goto LABEL_18;
        v12 = (char)DisplayServantCount;
        DisplayServantCount = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
        if ( !DisplayServantCount )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive(DisplayServantCount, v12 & 1, 0);
        if ( (v12 & 1) != 0 )
        {
          DisplayServantCount = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
          if ( !DisplayServantCount )
            goto LABEL_18;
          DisplayServantCount = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                              DisplayServantCount,
                                                              0);
          if ( !DisplayServantCount )
            goto LABEL_18;
          v13 = (UnityEngine_Transform_o *)DisplayServantCount;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)DisplayServantCount, 0);
          localPosition.fields.x = (float)((float)v7 - v8) * 250.0;
          UnityEngine_Transform__set_localPosition(v13, localPosition, 0);
          ++v7;
        }
      }
      servantButtonList = this->fields.servantButtonList;
      ++v6;
      if ( !servantButtonList )
        goto LABEL_18;
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__UpdateText(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *descriptionLabel; // x20
  const MethodInfo *v4; // x1
  UILabel_o *v5; // x20
  System_String_o *DescriptionText; // x0
  __int64 v7; // x1

  if ( (byte_597412E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597412E = 1;
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
  {
    v5 = this->fields.descriptionLabel;
    DescriptionText = BattlePlayerAttackPreselectTargetWindow__GetDescriptionText(this, v4);
    if ( !v5 )
      sub_2213CDC(DescriptionText, v7);
    UILabel__set_text(v5, DescriptionText, 0);
  }
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__get_closeBtnPath(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_597413C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4683/*"CloseButton"*/);
    byte_597413C = 1;
  }
  return (System_String_o *)StringLiteral_4683/*"CloseButton"*/;
}


void BattlePlayerAttackPreselectTargetWindow__setInitialPos(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_2213CDC(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0___ctor(
        BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0___InitializeServantButtons_b__0(
        BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  BattlePlayerAttackPreselectTargetWindow__SelectCommon(this->fields.__4__this, this->fields.servantIndex, v2);
}