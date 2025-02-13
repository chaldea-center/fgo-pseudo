void __fastcall EventUpValIconComponent___cctor(const MethodInfo *method)
{
  struct EventUpValIconComponent_StaticFields *static_fields; // x8

  if ( (byte_4BDB9A3 & 1) == 0 )
  {
    sub_1C21E38(&EventUpValIconComponent_TypeInfo);
    byte_4BDB9A3 = 1;
  }
  static_fields = EventUpValIconComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0x60000003E8LL;
  static_fields->NORMAL_MESSAGE_MAX_WIDTH = 112;
}


void __fastcall EventUpValIconComponent___ctor(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COLOR_NORMAL = _Q1;
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_BFEDC0;
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0LL);
}


void __fastcall EventUpValIconComponent__Clear(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.eventUpValItemList = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventUpValItemList, 0LL, v2, v3, v4, v5, v6, v7);
  EventUpValIconComponent__ClearParam(this, v9);
}


void __fastcall EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall EventUpValIconComponent__OnDestroy(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall EventUpValIconComponent__ParameterChange(
        EventUpValIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool activeSelf; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v6);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( activeSelf )
    EventUpValIconComponent__SetIconLabel(this, count, v7);
  return activeSelf;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValIconComponent__Set(
        EventUpValIconComponent_o *this,
        EventMargeItemUpValInfo_array *eventUpValItemList,
        int32_t servantId,
        int32_t servantRarity,
        int32_t equipSvtId,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x0
  SwitchParameterDisplayManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1

  if ( (byte_4BDB99F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4BDB99F = 1;
  }
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    this->fields.eventUpValItemList = eventUpValItemList;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)p_eventUpValItemList,
      (int64_t)eventUpValItemList,
      *(int64_t *)&servantId,
      servantRarity,
      *(System_String_o **)&equipSvtId,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    this->fields.servantId = servantId;
    this->fields.servantRarity = servantRarity;
    this->fields.equipSvtId = equipSvtId;
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, 0LL),
          (Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_1C22094(Instance, v15);
    }
    EventUpValIconComponent__SetIconLabel(this, Instance->fields.count, v16);
  }
  else
  {
    this->fields.eventUpValItemList = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)p_eventUpValItemList,
      0LL,
      *(int64_t *)&servantId,
      servantRarity,
      *(System_String_o **)&equipSvtId,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    EventUpValIconComponent__ClearParam(this, v17);
  }
}


void __fastcall EventUpValIconComponent__SetAlpha(
        EventUpValIconComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UIWidget_o *iconSprite; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  float v9; // s9
  float v10; // s10
  float v11; // s11
  UnityEngine_Object_o *eventLogoSprite; // x20
  UnityEngine_Object_o *eventNameBackSprite; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDB9A2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB9A2 = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite || !this->fields.paramLabel )
    goto LABEL_26;
  v6 = this->fields.invalid ? 136LL : 120LL;
  v7 = this->fields.invalid ? 132LL : 116LL;
  v8 = this->fields.invalid ? 128LL : 112LL;
  v9 = *(float *)((char *)&this->klass + v8);
  v10 = *(float *)((char *)&this->klass + v7);
  v11 = *(float *)((char *)&this->klass + v6);
  v14.fields.a = alpha;
  v14.fields.r = v9;
  v14.fields.g = v10;
  v14.fields.b = v11;
  UIWidget__set_color(iconSprite, v14, 0LL);
  iconSprite = (UIWidget_o *)this->fields.paramLabel;
  if ( !iconSprite )
    goto LABEL_26;
  v15.fields.r = v9;
  v15.fields.g = v10;
  v15.fields.b = v11;
  v15.fields.a = alpha;
  UIWidget__set_color(iconSprite, v15, 0LL);
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventLogoSprite;
    if ( !iconSprite )
      goto LABEL_26;
    v16.fields.r = iconSprite->fields.mColor.fields.r;
    v16.fields.g = iconSprite->fields.mColor.fields.g;
    v16.fields.b = iconSprite->fields.mColor.fields.b;
    v16.fields.a = alpha;
    UIWidget__set_color(iconSprite, v16, 0LL);
  }
  eventNameBackSprite = (UnityEngine_Object_o *)this->fields.eventNameBackSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventNameBackSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventNameBackSprite;
    if ( iconSprite )
    {
      v17.fields.r = iconSprite->fields.mColor.fields.r;
      v17.fields.g = iconSprite->fields.mColor.fields.g;
      v17.fields.b = iconSprite->fields.mColor.fields.b;
      v17.fields.a = alpha;
      UIWidget__set_color(iconSprite, v17, 0LL);
      return;
    }
LABEL_26:
    sub_1C22094(iconSprite, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValIconComponent__SetIconLabel(
        EventUpValIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  __int64 v6; // x8
  const MethodInfo *v7; // x1
  float v8; // s0
  Il2CppObject *Instance; // x0

  if ( (byte_4BDB9A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4BDB9A0 = 1;
  }
  eventUpValItemList = this->fields.eventUpValItemList;
  if ( eventUpValItemList && (v6 = *(_QWORD *)&eventUpValItemList->max_length) != 0 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      EventUpValIconComponent__SetParam(this, 0, method);
      v8 = 1.0;
    }
    else
    {
      EventUpValIconComponent__SetParam(this, count % (int)v6, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_1C22094(0LL, v7);
      v8 = *((float *)&Instance[3].klass + 1);
    }
    EventUpValIconComponent__SetAlpha(this, v8, v7);
  }
  else
  {
    EventUpValIconComponent__ClearParam(this, *(const MethodInfo **)&count);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValIconComponent__SetParam(
        EventUpValIconComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v3; // w20
  EventUpValIconComponent_o *v4; // x19
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  EventMargeItemUpValInfo_o *v6; // x20
  UIWidget_o *paramLabel; // x21
  UILabel_o *v8; // x21
  UILabel_o *v9; // x21
  int32_t v10; // w1
  UILabel_o *v11; // x21
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s10
  float v16; // s8
  float v17; // s9
  unsigned int localPosition; // s0
  float v19; // s11
  float v20; // s0
  UIWidget_o *v21; // x21
  float v22; // s12
  float v23; // s0
  int32_t v24; // w1
  UILabel_o *v25; // x21
  EventUpValIconComponent_o *v26; // x21
  UnityEngine_Object_o *eventLogoSprite; // x21
  int32_t eventId; // w8
  int32_t *v29; // x0
  UISprite_o *v30; // x21
  bool v31; // w21
  System_String_o *v32; // x0
  System_String_o *v33; // x22
  UnityEngine_Object_o *eventNameBackSprite; // x22
  int32_t alignment; // w8
  Il2CppObject *MasterData_object; // x22
  EventUpValIconComponent_o *v37; // x21
  int m_CancellationTokenSource; // w8
  EventUpValIconComponent_o *v39; // x22
  unsigned int v40; // w23
  __int64 v41; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t actMaxRarity[2]; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = num;
  v4 = this;
  if ( (byte_4BDB9A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&EventUpValIconComponent_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    this = (EventUpValIconComponent_o *)sub_1C21E38(&StringLiteral_19528/*"event_logo_mini_"*/);
    byte_4BDB9A1 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  eventUpValItemList = v4->fields.eventUpValItemList;
  v4->fields.invalid = 0;
  if ( !eventUpValItemList )
    goto LABEL_110;
  if ( eventUpValItemList->max_length <= v3 )
LABEL_111:
    sub_1C2209C(this, *(_QWORD *)&num);
  v6 = eventUpValItemList->m_Items[v3];
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v6 )
    goto LABEL_110;
  EventMargeItemUpValInfo__SetIcon(v6, v4->fields.iconSprite, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  paramLabel = (UIWidget_o *)v4->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !paramLabel )
    goto LABEL_110;
  UIWidget__set_width(paramLabel, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  v8 = v4->fields.paramLabel;
  this = (EventUpValIconComponent_o *)EventMargeItemUpValInfo__GetEventUpString(v6, 0LL);
  if ( !v8 )
    goto LABEL_110;
  UILabel__set_text(v8, (System_String_o *)this, 0LL);
  if ( v6->fields.isFriendPointBonus )
  {
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    v46.fields.r = 1.0;
    v46.fields.g = 1.0;
    v46.fields.b = 0.0;
    v46.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v46, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v9 = v4->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v9 )
      goto LABEL_110;
    UILabel__SetCondensedScale(v9, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0LL);
LABEL_18:
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    v10 = 1;
    goto LABEL_28;
  }
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !v6->fields.isNotClassBoard )
  {
    if ( !this )
      goto LABEL_110;
    v48.fields.r = 1.0;
    v48.fields.g = 1.0;
    v48.fields.b = 1.0;
    v48.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v48, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)this, 15, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v26 = this;
    if ( !byte_4BD6BB6 )
    {
      this = (EventUpValIconComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( !v26 )
      goto LABEL_110;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v26,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0LL);
    goto LABEL_18;
  }
  if ( !this )
    goto LABEL_110;
  v47.fields.r = 1.0;
  v47.fields.g = 1.0;
  v47.fields.b = 1.0;
  v47.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v47, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  v11 = v4->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !v11 )
    goto LABEL_110;
  UILabel__SetCondensedScale(v11, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v10 = 2;
LABEL_28:
  UILabel__set_alignment((UILabel_o *)this, v10, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.baseObject;
  if ( !this )
    goto LABEL_110;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v15 = v12;
  v16 = v13;
  v17 = v14;
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v19 = *(float *)&localPosition;
  LODWORD(v20) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)System_Math_TypeInfo;
  v21 = (UIWidget_o *)v4->fields.paramLabel;
  v22 = v20;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v21 )
    goto LABEL_110;
  v23 = ceilf(v22);
  v24 = v23 == INFINITY ? 0x80000000 : (int)v23;
  UIWidget__set_width(v21, v24, 0LL);
  if ( v6->fields.isServantPoint )
  {
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v25 = v4->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v25 )
      goto LABEL_110;
    num = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    *(_QWORD *)&num = (unsigned int)v4->fields.messageMaxWidth;
    v25 = v4->fields.paramLabel;
    if ( num < 1 )
    {
      this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
      if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
      if ( !v25 )
        goto LABEL_110;
      num = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v25 )
    {
      goto LABEL_110;
    }
  }
  UILabel__SetCondensedScale(v25, num, 0, 0LL);
  eventLogoSprite = (UnityEngine_Object_o *)v4->fields.eventLogoSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    this = (EventUpValIconComponent_o *)v4->fields.eventLogoSprite;
    if ( !this )
      goto LABEL_110;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    if ( v6->fields.isFriendshipUpForCampaign )
    {
      eventId = v6->fields.eventId;
      v29 = actMaxRarity;
      if ( !eventId )
        eventId = 80368;
      actMaxRarity[0] = eventId;
      v30 = v4->fields.eventLogoSprite;
    }
    else
    {
      v30 = v4->fields.eventLogoSprite;
      LODWORD(v29) = (_DWORD)v6 + 16;
    }
    v32 = System_Int32__ToString((int32_t)v29, 0LL);
    v33 = System_String__Concat_63115476((System_String_o *)StringLiteral_19528/*"event_logo_mini_"*/, v32, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v31 = AtlasManager__SetBanner(v30, v33, 0LL);
  }
  else
  {
    v31 = 0;
  }
  eventNameBackSprite = (UnityEngine_Object_o *)v4->fields.eventNameBackSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventNameBackSprite, 0LL, 0LL) )
  {
    this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_110;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31, 0LL);
  }
  alignment = v4->fields.alignment;
  if ( alignment )
  {
    if ( alignment == 1 )
    {
      v15 = 0.0;
    }
    else if ( alignment == 2 )
    {
      this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
      if ( !this )
        goto LABEL_110;
      this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_110;
      v15 = -(float)(v19
                   + (float)(v22
                           * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL))));
    }
  }
  else
  {
    v15 = (float)(v19 + v22) * -0.5;
  }
  this = (EventUpValIconComponent_o *)v4->fields.baseObject;
  if ( v6->fields.isNotClassBoard )
    v15 = v15 + -0.5;
  if ( !this )
    goto LABEL_110;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  v45.fields.x = v15;
  v45.fields.y = v16;
  v45.fields.z = v17;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v45, 0LL);
  if ( !v6->fields.funcGroupEntity )
    return;
  this = (EventUpValIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_110;
  if ( !PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)this,
          &skillName,
          &actMaxRarity[1],
          v4->fields.servantId,
          v4->fields.servantRarity,
          v4->fields.equipSvtId,
          v6->fields.eventId,
          0LL) )
    return;
  this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantSkillMaster___),
        (this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventUpValIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !MasterData_object)
    || (v37 = this,
        (this = (EventUpValIconComponent_o *)ServantSkillMaster__getServantSkillList(
                                               (ServantSkillMaster_o *)MasterData_object,
                                               v4->fields.equipSvtId,
                                               0LL)) == 0LL) )
  {
LABEL_110:
    sub_1C22094(this, *(_QWORD *)&num);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v39 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= m_CancellationTokenSource )
        goto LABEL_111;
      v41 = *((_QWORD *)&v39->fields.alignment + (int)v40);
      if ( !v41 )
        goto LABEL_110;
      if ( *(_DWORD *)(v41 + 48) )
      {
        if ( !v37 )
          goto LABEL_110;
        this = (EventUpValIconComponent_o *)SkillLvMaster__GetEntity(
                                              (SkillLvMaster_o *)v37,
                                              *(_DWORD *)(v41 + 28),
                                              1,
                                              0LL);
        if ( this )
        {
          funcGroupEntity = v6->fields.funcGroupEntity;
          if ( !funcGroupEntity )
            goto LABEL_110;
          this = (EventUpValIconComponent_o *)System_Array__IndexOf_int_(
                                                *(System_Int32_array **)&this->fields.alignment,
                                                funcGroupEntity->fields.funcId,
                                                (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)this & 0x80000000) == 0 )
            break;
        }
      }
      m_CancellationTokenSource = (int)v39->fields.m_CancellationTokenSource;
      if ( (int)++v40 >= m_CancellationTokenSource )
        return;
    }
    v4->fields.invalid = 1;
  }
}


bool __fastcall EventUpValIconComponent__UpdateAlpha(
        EventUpValIconComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8

  eventUpValItemList = this->fields.eventUpValItemList;
  if ( eventUpValItemList && (int)eventUpValItemList->max_length >= 2 )
    EventUpValIconComponent__SetAlpha(this, alpha, method);
  return 1;
}