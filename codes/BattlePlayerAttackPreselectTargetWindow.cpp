void BattlePlayerAttackPreselectTargetWindow___ctor(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  this->fields.selectedUniqueId = -1;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


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
  __int64 v13; // x1

  if ( (byte_4E7AEBC & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEBC = 1;
  }
  decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(decideButton, 0, 0) )
  {
    BattlePlayerAttackPreselectTargetWindow__CacheDecideButtonColors(this, v6);
    BattlePlayerAttackPreselectTargetWindow__SetButtonColliderEnabled(v7, this->fields.decideButton, 1, v8);
    v10 = this->fields.decideButton;
    if ( !v10 )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10, 1, 0);
    if ( isEnabled )
    {
      BattlePlayerAttackPreselectTargetWindow__RestoreDecideButtonColors(this, v9);
    }
    else
    {
      v10 = this->fields.decideButton;
      if ( !v10 )
        goto LABEL_19;
      UIButtonColor__set_defaultColor((UIButtonColor_o *)v10, v10->fields.disabledColor, 0);
      v11 = this->fields.decideButton;
      if ( !v11 )
        goto LABEL_19;
      v11->fields.hover = v11->fields.disabledColor;
      v12 = this->fields.decideButton;
      if ( !v12 )
        goto LABEL_19;
      v12->fields.pressed = v12->fields.disabledColor;
    }
    v10 = this->fields.decideButton;
    if ( v10 )
    {
      v13 = isEnabled ? 0LL : 3LL;
      ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._14_SetState.methodPtr)(
        v10,
        v13,
        1,
        v10->klass->vtable._14_SetState.method);
      v10 = this->fields.decideButton;
      if ( v10 )
      {
        UIButtonColor__UpdateColor((UIButtonColor_o *)v10, 1, 0);
        return;
      }
    }
LABEL_19:
    sub_1D0F30C(v10, v9);
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

  if ( (byte_4E7AEBD & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEBD = 1;
  }
  if ( !this->fields.hasDecideButtonColorCache )
  {
    decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(decideButton, 0, 0) )
    {
      v5 = (UIButtonColor_o *)this->fields.decideButton;
      if ( !v5
        || (defaultColor = UIButtonColor__get_defaultColor(v5, 0),
            v6 = this->fields.decideButton,
            this->fields.decideButtonDefaultColor = defaultColor,
            !v6) )
      {
        sub_1D0F30C(v5, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleSelectServantWindow_SelectServantCallBack_o **p_selectCallBack; // x0
  struct BattleSelectServantWindow_SelectServantCallBack_o *v9; // x20
  struct BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack; // t1

  if ( !this->fields.isSelectionCompleted )
  {
    selectCallBack = this->fields.selectCallBack;
    p_selectCallBack = &this->fields.selectCallBack;
    v9 = selectCallBack;
    *((_BYTE *)p_selectCallBack + 69) = 1;
    *p_selectCallBack = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)p_selectCallBack, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( selectCallBack )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
        v9->fields.method_code,
        (unsigned int)uniqueId,
        v9->fields.method);
  }
}


bool BattlePlayerAttackPreselectTargetWindow__ExistsServant(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4E7AEAF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_IndexValue_BattleServantData___);
    byte_4E7AEAF = 1;
  }
  return BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.servantList,
           index,
           0,
           (const MethodInfo_323D4EC *)Method_BasicHelper_IndexValue_BattleServantData___) != 0;
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
  System_String_o *SkillDescriptionTextKey; // x20
  bool v4; // w0
  bool v5; // w21
  System_String_o *v6; // x0
  System_String_o *v8; // x20
  const MethodInfo *v9; // x1
  Il2CppObject *SourceSkillName; // x21
  const MethodInfo *v11; // x1
  Il2CppObject *SourceSkillDetail; // x2

  if ( (byte_4E7AEB3 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10530/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT"*/);
    sub_1D0F0B4(&StringLiteral_10531/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_INVALID"*/);
    byte_4E7AEB3 = 1;
  }
  if ( !this->fields.sourceSkillId || this->fields.sourceSkillLv <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = (System_String_o *)StringLiteral_10531/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_INVALID"*/;
    return LocalizationManager__Get(v6, 0);
  }
  SkillDescriptionTextKey = BattlePlayerAttackPreselectTargetWindow__GetSkillDescriptionTextKey(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__ContainsKey(SkillDescriptionTextKey, 0);
  v5 = v4;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v4 )
    {
LABEL_9:
      v6 = SkillDescriptionTextKey;
      return LocalizationManager__Get(v6, 0);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v5 )
      goto LABEL_9;
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10530/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT"*/, 0);
  SourceSkillName = (Il2CppObject *)BattlePlayerAttackPreselectTargetWindow__GetSourceSkillName(this, v9);
  SourceSkillDetail = (Il2CppObject *)BattlePlayerAttackPreselectTargetWindow__GetSourceSkillDetail(this, v11);
  return System_String__Format_65604080(v8, SourceSkillName, SourceSkillDetail, 0);
}


int32_t BattlePlayerAttackPreselectTargetWindow__GetDisplayServantCount(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  BattlePlayerAttackPreselectTargetWindow_o *v2; // x19
  struct UIButton_array *servantButtonList; // x8
  unsigned __int64 v4; // x21
  int32_t v5; // w20
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v7; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4E7AEAE & 1) == 0 )
  {
    this = (BattlePlayerAttackPreselectTargetWindow_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEAE = 1;
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
      sub_1D0F314(this);
    v7 = (UnityEngine_Object_o *)servantButtonList->m_Items[v4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePlayerAttackPreselectTargetWindow_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattlePlayerAttackPreselectTargetWindow_o *)BattlePlayerAttackPreselectTargetWindow__ExistsServant(
                                                            v2,
                                                            v4,
                                                            v9);
      v5 += (unsigned __int8)this & 1;
    }
    servantButtonList = v2->fields.servantButtonList;
    ++v4;
    if ( !servantButtonList )
      sub_1D0F30C(this, v8);
  }
  return v5;
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__GetSkillDescriptionTextKey(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t sourceSkillId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E7AEB4 & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10532/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_{0}"*/);
    byte_4E7AEB4 = 1;
  }
  sourceSkillId = this->fields.sourceSkillId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sourceSkillId);
  return System_String__Format((System_String_o *)StringLiteral_10532/*"PLAYER_ATTACK_PRESELECT_TARGET_WINDOW_DESCRIPTION_TEXT_{0}"*/, v3, 0);
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__GetSourceSkillDetail(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  SkillLvEntity_o *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4E7AEB6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E7AEB6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v4);
  Entity = SkillLvMaster__GetEntity(
             (SkillLvMaster_o *)Master_object,
             this->fields.sourceSkillId,
             this->fields.sourceSkillLv,
             0);
  if ( Entity )
    return SkillLvEntity__getDetail_44251960(Entity, this->fields.sourceSkillLv, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4E72907 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E72907 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__GetSourceSkillName(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4E7AEB5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E7AEB5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.sourceSkillId,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4E72907 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E72907 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
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

  if ( (byte_4E7AEA9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    sub_1D0F0B4(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__);
    sub_1D0F0B4(&EventDelegate_Callback_TypeInfo);
    byte_4E7AEA9 = 1;
  }
  if ( !this->fields.isInitialized )
  {
    BattlePlayerAttackPreselectTargetWindow__SetupDecideButtonTextSprite(this, method);
    BattlePlayerAttackPreselectTargetWindow__UpdateText(this, v3);
    BattlePlayerAttackPreselectTargetWindow__InitializeServantButtons(this, v4);
    decideButton = this->fields.decideButton;
    v6 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__,
      0);
    BattlePlayerAttackPreselectTargetWindow__InitializeButton(v7, decideButton, v6, v8);
    closeButton = this->fields.closeButton;
    v10 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct EventDelegate_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4E7AEB1 & 1) == 0 )
  {
    sub_1D0F0B4(&EventDelegate_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEB1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v11 = (EventDelegate_o *)sub_1D0F300(EventDelegate_TypeInfo);
    EventDelegate___ctor_50674352(v11, callback, 0);
    if ( !onClick
      || (items = onClick->fields._items,
          v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++onClick->fields._version,
          !items) )
    {
LABEL_15:
      sub_1D0F30C(v6, v7);
    }
    v20 = onClick->fields._size;
    if ( (unsigned int)v20 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)onClick,
        (Il2CppObject *)v11,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + v20;
      onClick->fields._size = v20 + 1;
      v21[4] = (Il2CppClass *)v11;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v11, v12, v13, v14, v15, v16, v17);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__InitializeServantButtons(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  struct UIButton_array *servantButtonList; // x8
  unsigned __int64 v4; // x23
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIButton_array *v14; // x8
  UIButton_o *v15; // x21
  EventDelegate_Callback_o *v16; // x22
  BattlePlayerAttackPreselectTargetWindow_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4E7AEB0 & 1) == 0 )
  {
    sub_1D0F0B4(&EventDelegate_Callback_TypeInfo);
    sub_1D0F0B4(&Method_BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0__InitializeServantButtons_b__0__);
    sub_1D0F0B4(&BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0_TypeInfo);
    byte_4E7AEB0 = 1;
  }
  servantButtonList = this->fields.servantButtonList;
  if ( servantButtonList )
  {
    v4 = 0;
    while ( (__int64)v4 < SLODWORD(servantButtonList->max_length) )
    {
      v5 = sub_1D0F300(BattlePlayerAttackPreselectTargetWindow___c__DisplayClass35_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 24) = this;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
        *(_DWORD *)(v5 + 16) = v4;
        v14 = this->fields.servantButtonList;
        if ( v14 )
        {
          if ( v4 >= LODWORD(v14->max_length) )
            sub_1D0F314(v6);
          v15 = v14->m_Items[v4];
          v16 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
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
      sub_1D0F30C(v6, v7);
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

  if ( (byte_4E7AEB9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    byte_4E7AEB9 = 1;
  }
  if ( !this->fields.isSelectionCompleted )
  {
    v3 = Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
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

  if ( (byte_4E7AEB8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__);
    byte_4E7AEB8 = 1;
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
        v3 = (_QWORD *)sub_1D0F0CC(Method_BattlePlayerAttackPreselectTargetWindow_OnClickDecideButton__);
      v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
      BattlePlayerAttackPreselectTargetWindow__CompleteSelection(this, this->fields.selectedUniqueId, v5);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__Open(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        BattleServantData_array *servantList,
        int32_t sourceSkillId,
        int32_t sourceSkillLv,
        BattleSelectServantWindow_SelectServantCallBack_o *selectCallBack,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v12; // x2

  this->fields.selectCallBack = selectCallBack;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectCallBack,
    (int32_t)selectCallBack,
    sourceSkillId,
    sourceSkillLv,
    (System_String_o *)selectCallBack,
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


void BattlePlayerAttackPreselectTargetWindow__Open_49006644(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  BattleWindowOuterClickComponent_OuterClickCall_o *v6; // x20

  if ( (byte_4E7AEAB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattlePlayerAttackPreselectTargetWindow_OnClickCloseButton__);
    sub_1D0F0B4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4E7AEAB = 1;
  }
  this->fields.isSelectionCompleted = 0;
  this->fields.selectedUniqueId = -1;
  BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(this, (const MethodInfo *)call);
  BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(this, v5);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v6 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1D0F300(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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

  if ( (byte_4E7AEBE & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEBE = 1;
  }
  if ( this->fields.hasDecideButtonColorCache )
  {
    decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(decideButton, 0, 0) )
    {
      v5 = (UIButtonColor_o *)this->fields.decideButton;
      if ( !v5
        || (UIButtonColor__set_defaultColor(v5, this->fields.decideButtonDefaultColor, 0),
            (v6 = this->fields.decideButton) == 0)
        || (v6->fields.hover = this->fields.decideButtonHoverColor, (v7 = this->fields.decideButton) == 0) )
      {
        sub_1D0F30C(v5, v4);
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
  BattlePlayerAttackPreselectTargetWindow_o *v4; // x19
  struct BattleServantData_array *servantList; // x8
  int32_t max_length; // w9
  BattleServantData_o *v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  v4 = this;
  if ( (byte_4E7AEB7 & 1) == 0 )
  {
    this = (BattlePlayerAttackPreselectTargetWindow_o *)sub_1D0F0B4(&Method_BattlePlayerAttackPreselectTargetWindow_SelectCommon__);
    byte_4E7AEB7 = 1;
  }
  if ( (index & 0x80000000) == 0 )
  {
    servantList = v4->fields.servantList;
    if ( servantList )
    {
      max_length = servantList->max_length;
      if ( max_length > index )
      {
        if ( max_length <= (unsigned int)index )
          sub_1D0F314(this);
        v7 = servantList->m_Items[index];
        if ( v7 )
        {
          v4->fields.selectedUniqueId = v7->fields.uniqueId;
          v8 = Method_BattlePlayerAttackPreselectTargetWindow_SelectCommon__;
          if ( (*((_BYTE *)Method_BattlePlayerAttackPreselectTargetWindow_SelectCommon__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1D0F0CC(Method_BattlePlayerAttackPreselectTargetWindow_SelectCommon__);
          v9 = (System_Reflection_MethodBase_o *)sub_1D0F098(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
          BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(v4, v10);
          BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(v4, v11);
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
  Il2CppObject *Component_object; // x21
  Il2CppObject *v9; // x20

  if ( (byte_4E7AEBF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEBF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0);
  if ( !v6 )
  {
    if ( !button )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)button,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v6 )
    {
      if ( !Component_object )
        goto LABEL_18;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnabled, 0);
    }
    v9 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)button,
           (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( v6 )
    {
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, isEnabled, 0);
        return;
      }
LABEL_18:
      sub_1D0F30C(v6, v7);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__SetServantData(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        BattleServantData_array *servantList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  __int64 gameObject; // x0
  const MethodInfo *v12; // x1
  struct UITexture_array *servantTop; // x8
  unsigned __int64 v14; // x25
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 v17; // x8
  _BOOL4 v18; // w23
  Il2CppClass **v19; // x8
  BattleServantData_o *v20; // x24
  unsigned int *v21; // x28
  int32_t DispImageSvtId; // w23
  int32_t DispLimitCount; // w24
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x22
  unsigned int *v31; // x0
  struct UITexture_array *v32; // x8
  UnityEngine_Transform_o *v33; // x22
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  __int64 v36; // x0

  if ( (byte_4E7AEAC & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&ServantAssetLoadManager_TypeInfo);
    byte_4E7AEAC = 1;
  }
  this->fields.servantList = servantList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantList,
    (int32_t)servantList,
    (int32_t)method,
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = UnityEngine_Object__op_Equality(v16, 0, 0);
      if ( (gameObject & 1) == 0 )
      {
        if ( servantList && (v17 = LODWORD(servantList->max_length), (__int64)v14 < (int)v17) )
        {
          if ( v14 >= v17 )
            goto LABEL_39;
          v18 = servantList->m_Items[v14] != 0;
        }
        else
        {
          v18 = 0;
        }
        if ( !v16
          || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0)) == 0 )
        {
LABEL_36:
          sub_1D0F30C(gameObject, v12);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v18, 0);
        if ( v18 )
        {
          if ( !servantList )
            goto LABEL_36;
          if ( v14 >= LODWORD(servantList->max_length) )
            goto LABEL_39;
          v19 = &servantList->obj.klass + v14;
          v20 = (BattleServantData_o *)v19[4];
          if ( !v20 )
            goto LABEL_36;
          v21 = (unsigned int *)this->fields.servantTop;
          DispImageSvtId = BattleServantData__GetDispImageSvtId((BattleServantData_o *)v19[4], 0);
          DispLimitCount = BattleServantData__getDispLimitCount(v20, 1, 0);
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          gameObject = (__int64)ServantAssetLoadManager__loadStatusFace(
                                  (UITexture_o *)v16,
                                  DispImageSvtId,
                                  DispLimitCount,
                                  0);
          if ( !v21 )
            goto LABEL_36;
          v30 = gameObject;
          if ( gameObject )
          {
            gameObject = sub_1D0F1F0(gameObject, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
            if ( !gameObject )
            {
              v36 = sub_1D0F330(0);
              sub_1D0F1DC(v36, 0);
            }
          }
          if ( v14 >= v21[6] )
            goto LABEL_39;
          v31 = &v21[2 * v14];
          *((_QWORD *)v31 + 4) = v30;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v31 + 8), v30, v24, v25, v26, v27, v28, v29);
          v32 = this->fields.servantTop;
          if ( !v32 )
            goto LABEL_36;
          if ( v14 >= LODWORD(v32->max_length) )
LABEL_39:
            sub_1D0F314(gameObject);
          gameObject = (__int64)v32->m_Items[v14];
          if ( !gameObject )
            goto LABEL_36;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_36;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          v33 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4E70C9E )
          {
            gameObject = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
            byte_4E70C9E = 1;
          }
          if ( !v33 )
            goto LABEL_36;
          UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        }
      }
      servantTop = this->fields.servantTop;
      ++v14;
      if ( !servantTop )
        goto LABEL_36;
    }
    BattlePlayerAttackPreselectTargetWindow__UpdateServantButtonPositions(this, v12);
    this->fields.selectedUniqueId = -1;
    BattlePlayerAttackPreselectTargetWindow__UpdateSelectIcons(this, v34);
    BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(this, v35);
  }
}


void BattlePlayerAttackPreselectTargetWindow__SetupDecideButtonTextSprite(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *decideButtonTextSprite; // x20
  BattleDataDefine_c *v4; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  __int64 v6; // x1
  UISprite_o *v7; // x0
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E7AEAA & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&BattleDataDefine_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_3134/*"BattleAssetUIAtlas"*/);
    sub_1D0F0B4(&StringLiteral_17884/*"btn_txt_target_select"*/);
    byte_4E7AEAA = 1;
  }
  atlas = 0;
  decideButtonTextSprite = (UnityEngine_Object_o *)this->fields.decideButtonTextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(decideButtonTextSprite, 0, 0) )
  {
    v4 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v4 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v4->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3134/*"BattleAssetUIAtlas"*/, 0) )
    {
      v7 = this->fields.decideButtonTextSprite;
      if ( !v7 || (UISprite__set_atlas(v7, atlas, 0), (v7 = this->fields.decideButtonTextSprite) == 0) )
        sub_1D0F30C(v7, v6);
      UISprite__set_spriteName(v7, (System_String_o *)StringLiteral_17884/*"btn_txt_target_select"*/, 0);
    }
  }
}


void BattlePlayerAttackPreselectTargetWindow__UpdateDecideButton(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *decideButton; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4E7AEBB & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEBB = 1;
  }
  decideButton = (UnityEngine_Object_o *)this->fields.decideButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v8; // x1
  struct BattleServantData_array *servantList; // x8
  unsigned __int64 v10; // x9
  __int64 v11; // x8
  bool v12; // w21

  v2 = this;
  if ( (byte_4E7AEBA & 1) == 0 )
  {
    this = (BattlePlayerAttackPreselectTargetWindow_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEBA = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePlayerAttackPreselectTargetWindow_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        servantList = v2->fields.servantList;
        if ( !servantList )
          goto LABEL_15;
        v10 = LODWORD(servantList->max_length);
        if ( (__int64)v6 >= (int)v10 )
          goto LABEL_15;
        if ( v6 >= v10 )
LABEL_22:
          sub_1D0F314(this);
        v11 = *((_QWORD *)&servantList->obj.klass + v4);
        if ( v11 )
          v12 = *(_DWORD *)(v11 + 24) == v2->fields.selectedUniqueId;
        else
LABEL_15:
          v12 = 0;
        if ( !v7
          || (this = (BattlePlayerAttackPreselectTargetWindow_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v7,
                                                                    0)) == 0 )
        {
LABEL_20:
          sub_1D0F30C(this, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
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

  if ( (byte_4E7AEAD & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEAD = 1;
  }
  if ( this->fields.servantButtonList )
  {
    DisplayServantCount = (UnityEngine_GameObject_o *)BattlePlayerAttackPreselectTargetWindow__GetDisplayServantCount(
                                                        this,
                                                        method);
    servantButtonList = this->fields.servantButtonList;
    if ( !servantButtonList )
LABEL_18:
      sub_1D0F30C(DisplayServantCount, v4);
    v6 = 0;
    v7 = 0;
    v8 = (float)((int)DisplayServantCount - 1) * 0.5;
    while ( 1 )
    {
      max_length_low = LODWORD(servantButtonList->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        sub_1D0F314(DisplayServantCount);
      v10 = (UnityEngine_Object_o *)servantButtonList->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4E7AEB2 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AEB2 = 1;
  }
  descriptionLabel = (UnityEngine_Object_o *)this->fields.descriptionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(descriptionLabel, 0, 0) )
  {
    v5 = this->fields.descriptionLabel;
    DescriptionText = BattlePlayerAttackPreselectTargetWindow__GetDescriptionText(this, v4);
    if ( !v5 )
      sub_1D0F30C(DescriptionText, v7);
    UILabel__set_text(v5, DescriptionText, 0);
  }
}


System_String_o *BattlePlayerAttackPreselectTargetWindow__get_closeBtnPath(
        BattlePlayerAttackPreselectTargetWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E7AEC0 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_4551/*"CloseButton"*/);
    byte_4E7AEC0 = 1;
  }
  return (System_String_o *)StringLiteral_4551/*"CloseButton"*/;
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
  if ( !byte_4E70C99 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1D0F30C(gameObject, v4);
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
    sub_1D0F30C(this, method);
  BattlePlayerAttackPreselectTargetWindow__SelectCommon(this->fields.__4__this, this->fields.servantIndex, v2);
}