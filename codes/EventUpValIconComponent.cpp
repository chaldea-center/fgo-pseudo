void __fastcall EventUpValIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventUpValIconComponent_StaticFields *static_fields; // x8

  if ( (byte_49FD9BF & 1) == 0 )
  {
    sub_1B64870(&EventUpValIconComponent_TypeInfo, v1);
    byte_49FD9BF = 1;
  }
  static_fields = EventUpValIconComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0x60000003E8LL;
  static_fields->NORMAL_MESSAGE_MAX_WIDTH = 112;
}


void __fastcall EventUpValIconComponent___ctor(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COLOR_NORMAL = _Q1;
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_BA3E20;
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0LL);
}


void __fastcall EventUpValIconComponent__Clear(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.eventUpValItemList = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, 0, v2, v3);
  EventUpValIconComponent__ClearParam(this, v5);
}


void __fastcall EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64ACC(0LL, v3);
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
    sub_1B64ACC(0LL, v6);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( activeSelf )
    EventUpValIconComponent__SetIconLabel(this, count, v7);
  return activeSelf;
}


void __fastcall EventUpValIconComponent__Set(
        EventUpValIconComponent_o *this,
        EventMargeItemUpValInfo_array *eventUpValItemList,
        int32_t servantId,
        int32_t servantRarity,
        int32_t equipSvtId,
        const MethodInfo *method)
{
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x0
  SwitchParameterDisplayManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  if ( (byte_49FD9BB & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, eventUpValItemList);
    byte_49FD9BB = 1;
  }
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    this->fields.eventUpValItemList = eventUpValItemList;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)p_eventUpValItemList,
      (int32_t)eventUpValItemList,
      servantId,
      servantRarity);
    this->fields.servantId = servantId;
    this->fields.servantRarity = servantRarity;
    this->fields.equipSvtId = equipSvtId;
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, 0LL),
          (Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_1B64ACC(Instance, v13);
    }
    EventUpValIconComponent__SetIconLabel(this, Instance->fields.count, v14);
  }
  else
  {
    this->fields.eventUpValItemList = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)p_eventUpValItemList, 0, servantId, servantRarity);
    EventUpValIconComponent__ClearParam(this, v15);
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

  if ( (byte_49FD9BE & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FD9BE = 1;
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
    sub_1B64ACC(iconSprite, method);
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

  if ( (byte_49FD9BC & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_49FD9BC = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_1B64ACC(0LL, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  EventMargeItemUpValInfo_o *v15; // x20
  UIWidget_o *paramLabel; // x21
  UILabel_o *v17; // x21
  UILabel_o *v18; // x21
  int32_t v19; // w1
  UILabel_o *v20; // x21
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s10
  float v25; // s8
  float v26; // s9
  unsigned int localPosition; // s0
  float v28; // s11
  float v29; // s0
  UIWidget_o *v30; // x21
  float v31; // s12
  float v32; // s0
  int32_t v33; // w1
  UILabel_o *v34; // x21
  EventUpValIconComponent_o *v35; // x21
  UnityEngine_Object_o *eventLogoSprite; // x21
  int32_t eventId; // w8
  int32_t *v38; // x0
  UISprite_o *v39; // x21
  bool v40; // w21
  System_String_o *v41; // x0
  System_String_o *v42; // x22
  UnityEngine_Object_o *eventNameBackSprite; // x22
  int32_t alignment; // w8
  Il2CppObject *MasterData_object; // x22
  EventUpValIconComponent_o *v46; // x21
  int m_CancellationTokenSource; // w8
  EventUpValIconComponent_o *v48; // x22
  unsigned int v49; // w23
  __int64 v50; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t actMaxRarity[2]; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = num;
  v4 = this;
  if ( (byte_49FD9BD & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_IndexOf_int___, *(_QWORD *)&num);
    sub_1B64870(&AtlasManager_TypeInfo, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1B64870(&EventUpValIconComponent_TypeInfo, v8);
    sub_1B64870(&System_Math_TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    this = (EventUpValIconComponent_o *)sub_1B64870(&StringLiteral_19122/*"event_logo_mini_"*/, v13);
    byte_49FD9BD = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  eventUpValItemList = v4->fields.eventUpValItemList;
  v4->fields.invalid = 0;
  if ( !eventUpValItemList )
    goto LABEL_110;
  if ( eventUpValItemList->max_length <= v3 )
LABEL_111:
    sub_1B64AD4(this, *(_QWORD *)&num);
  v15 = eventUpValItemList->m_Items[v3];
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v15 )
    goto LABEL_110;
  EventMargeItemUpValInfo__SetIcon(v15, v4->fields.iconSprite, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  paramLabel = (UIWidget_o *)v4->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !paramLabel )
    goto LABEL_110;
  UIWidget__set_width(paramLabel, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  v17 = v4->fields.paramLabel;
  this = (EventUpValIconComponent_o *)EventMargeItemUpValInfo__GetEventUpString(v15, 0LL);
  if ( !v17 )
    goto LABEL_110;
  UILabel__set_text(v17, (System_String_o *)this, 0LL);
  if ( v15->fields.isFriendPointBonus )
  {
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    v55.fields.r = 1.0;
    v55.fields.g = 1.0;
    v55.fields.b = 0.0;
    v55.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v55, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v18 = v4->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v18 )
      goto LABEL_110;
    UILabel__SetCondensedScale(v18, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
LABEL_18:
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    v19 = 1;
    goto LABEL_28;
  }
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !v15->fields.isNotClassBoard )
  {
    if ( !this )
      goto LABEL_110;
    v57.fields.r = 1.0;
    v57.fields.g = 1.0;
    v57.fields.b = 1.0;
    v57.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v57, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)this, 15, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v35 = this;
    if ( !byte_49F9206 )
    {
      this = (EventUpValIconComponent_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&num);
      byte_49F9206 = 1;
    }
    if ( !v35 )
      goto LABEL_110;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v35,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0LL);
    goto LABEL_18;
  }
  if ( !this )
    goto LABEL_110;
  v56.fields.r = 1.0;
  v56.fields.g = 1.0;
  v56.fields.b = 1.0;
  v56.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v56, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  v20 = v4->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !v20 )
    goto LABEL_110;
  UILabel__SetCondensedScale(v20, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v19 = 2;
LABEL_28:
  UILabel__set_alignment((UILabel_o *)this, v19, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.baseObject;
  if ( !this )
    goto LABEL_110;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v24 = v21;
  v25 = v22;
  v26 = v23;
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v28 = *(float *)&localPosition;
  LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)System_Math_TypeInfo;
  v30 = (UIWidget_o *)v4->fields.paramLabel;
  v31 = v29;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v30 )
    goto LABEL_110;
  v32 = ceilf(v31);
  v33 = v32 == INFINITY ? 0x80000000 : (int)v32;
  UIWidget__set_width(v30, v33, 0LL);
  if ( v15->fields.isServantPoint )
  {
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v34 = v4->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v34 )
      goto LABEL_110;
    num = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    *(_QWORD *)&num = (unsigned int)v4->fields.messageMaxWidth;
    v34 = v4->fields.paramLabel;
    if ( num < 1 )
    {
      this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
      if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
      if ( !v34 )
        goto LABEL_110;
      num = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v34 )
    {
      goto LABEL_110;
    }
  }
  UILabel__SetCondensedScale(v34, num, 0LL);
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
    if ( v15->fields.isFriendshipUpForCampaign )
    {
      eventId = v15->fields.eventId;
      v38 = actMaxRarity;
      if ( !eventId )
        eventId = 80368;
      actMaxRarity[0] = eventId;
      v39 = v4->fields.eventLogoSprite;
    }
    else
    {
      v39 = v4->fields.eventLogoSprite;
      LODWORD(v38) = (_DWORD)v15 + 16;
    }
    v41 = System_Int32__ToString((int32_t)v38, 0LL);
    v42 = System_String__Concat_61383576((System_String_o *)StringLiteral_19122/*"event_logo_mini_"*/, v41, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v40 = AtlasManager__SetBanner(v39, v42, 0LL);
  }
  else
  {
    v40 = 0;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v40, 0LL);
  }
  alignment = v4->fields.alignment;
  if ( alignment )
  {
    if ( alignment == 1 )
    {
      v24 = 0.0;
    }
    else if ( alignment == 2 )
    {
      this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
      if ( !this )
        goto LABEL_110;
      this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_110;
      v24 = -(float)(v28
                   + (float)(v31
                           * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL))));
    }
  }
  else
  {
    v24 = (float)(v28 + v31) * -0.5;
  }
  this = (EventUpValIconComponent_o *)v4->fields.baseObject;
  if ( v15->fields.isNotClassBoard )
    v24 = v24 + -0.5;
  if ( !this )
    goto LABEL_110;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  v54.fields.x = v24;
  v54.fields.y = v25;
  v54.fields.z = v26;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v54, 0LL);
  if ( !v15->fields.funcGroupEntity )
    return;
  this = (EventUpValIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_110;
  if ( !PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)this,
          &skillName,
          &actMaxRarity[1],
          v4->fields.servantId,
          v4->fields.servantRarity,
          v4->fields.equipSvtId,
          v15->fields.eventId,
          0LL) )
    return;
  this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantSkillMaster___),
        (this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventUpValIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !MasterData_object)
    || (v46 = this,
        (this = (EventUpValIconComponent_o *)ServantSkillMaster__getServantSkillList(
                                               (ServantSkillMaster_o *)MasterData_object,
                                               v4->fields.equipSvtId,
                                               0LL)) == 0LL) )
  {
LABEL_110:
    sub_1B64ACC(this, *(_QWORD *)&num);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v48 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( v49 >= m_CancellationTokenSource )
        goto LABEL_111;
      v50 = *((_QWORD *)&v48->fields.alignment + (int)v49);
      if ( !v50 )
        goto LABEL_110;
      if ( *(_DWORD *)(v50 + 48) )
      {
        if ( !v46 )
          goto LABEL_110;
        this = (EventUpValIconComponent_o *)SkillLvMaster__GetEntity(
                                              (SkillLvMaster_o *)v46,
                                              *(_DWORD *)(v50 + 28),
                                              1,
                                              0LL);
        if ( this )
        {
          funcGroupEntity = v15->fields.funcGroupEntity;
          if ( !funcGroupEntity )
            goto LABEL_110;
          this = (EventUpValIconComponent_o *)System_Array__IndexOf_int_(
                                                *(System_Int32_array **)&this->fields.alignment,
                                                funcGroupEntity->fields.funcId,
                                                (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)this & 0x80000000) == 0 )
            break;
        }
      }
      m_CancellationTokenSource = (int)v48->fields.m_CancellationTokenSource;
      if ( (int)++v49 >= m_CancellationTokenSource )
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