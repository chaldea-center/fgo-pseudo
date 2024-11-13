void __fastcall EventUpValIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EventUpValIconComponent_StaticFields *static_fields; // x8

  if ( (byte_4B15669 & 1) == 0 )
  {
    sub_1BCA7E0(&EventUpValIconComponent_TypeInfo, v1, v2);
    byte_4B15669 = 1;
  }
  static_fields = EventUpValIconComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0x60000003E8LL;
  static_fields->NORMAL_MESSAGE_MAX_WIDTH = 112;
}


void __fastcall EventUpValIconComponent___ctor(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COLOR_NORMAL = _Q1;
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_BD3490;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUpValItemList, 0LL, v2, v3, v4, v5, v6, v7);
  EventUpValIconComponent__ClearParam(this, v9);
}


void __fastcall EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
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
    sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B15665 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__,
      eventUpValItemList,
      *(_QWORD *)&servantId);
    byte_4B15665 = 1;
  }
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    this->fields.eventUpValItemList = eventUpValItemList;
    sub_1BCA784(
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
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, 0LL),
          (Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_1BCAA3C(Instance, v15);
    }
    EventUpValIconComponent__SetIconLabel(this, Instance->fields.count, v16);
  }
  else
  {
    this->fields.eventUpValItemList = 0LL;
    sub_1BCA784(
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
  __int64 v3; // x2
  UIWidget_o *iconSprite; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x10
  float v10; // s9
  float v11; // s10
  float v12; // s11
  __int64 v13; // x1
  UnityEngine_Object_o *eventLogoSprite; // x20
  UnityEngine_Object_o *eventNameBackSprite; // x20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B15668 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B15668 = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite || !this->fields.paramLabel )
    goto LABEL_26;
  v7 = this->fields.invalid ? 136LL : 120LL;
  v8 = this->fields.invalid ? 132LL : 116LL;
  v9 = this->fields.invalid ? 128LL : 112LL;
  v10 = *(float *)((char *)&this->klass + v9);
  v11 = *(float *)((char *)&this->klass + v8);
  v12 = *(float *)((char *)&this->klass + v7);
  v16.fields.a = alpha;
  v16.fields.r = v10;
  v16.fields.g = v11;
  v16.fields.b = v12;
  UIWidget__set_color(iconSprite, v16, 0LL);
  iconSprite = (UIWidget_o *)this->fields.paramLabel;
  if ( !iconSprite )
    goto LABEL_26;
  v17.fields.r = v10;
  v17.fields.g = v11;
  v17.fields.b = v12;
  v17.fields.a = alpha;
  UIWidget__set_color(iconSprite, v17, 0LL);
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventLogoSprite;
    if ( !iconSprite )
      goto LABEL_26;
    v18.fields.r = iconSprite->fields.mColor.fields.r;
    v18.fields.g = iconSprite->fields.mColor.fields.g;
    v18.fields.b = iconSprite->fields.mColor.fields.b;
    v18.fields.a = alpha;
    UIWidget__set_color(iconSprite, v18, 0LL);
  }
  eventNameBackSprite = (UnityEngine_Object_o *)this->fields.eventNameBackSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(eventNameBackSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventNameBackSprite;
    if ( iconSprite )
    {
      v19.fields.r = iconSprite->fields.mColor.fields.r;
      v19.fields.g = iconSprite->fields.mColor.fields.g;
      v19.fields.b = iconSprite->fields.mColor.fields.b;
      v19.fields.a = alpha;
      UIWidget__set_color(iconSprite, v19, 0LL);
      return;
    }
LABEL_26:
    sub_1BCAA3C(iconSprite, method);
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

  if ( (byte_4B15666 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count, method);
    byte_4B15666 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  EventMargeItemUpValInfo_o *v24; // x20
  UIWidget_o *paramLabel; // x21
  UILabel_o *v26; // x21
  UILabel_o *v27; // x21
  int32_t v28; // w1
  UILabel_o *v29; // x21
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s10
  float v34; // s8
  float v35; // s9
  unsigned int localPosition; // s0
  float v37; // s11
  float v38; // s0
  UIWidget_o *v39; // x21
  float v40; // s12
  float v41; // s0
  int32_t v42; // w1
  UILabel_o *v43; // x21
  __int64 v44; // x2
  EventUpValIconComponent_o *v45; // x21
  __int64 v46; // x1
  UnityEngine_Object_o *eventLogoSprite; // x21
  int32_t eventId; // w8
  int32_t *v49; // x0
  UISprite_o *v50; // x21
  bool v51; // w21
  System_String_o *v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x22
  UnityEngine_Object_o *eventNameBackSprite; // x22
  int32_t alignment; // w8
  Il2CppObject *MasterData_object; // x22
  EventUpValIconComponent_o *v58; // x21
  int m_CancellationTokenSource; // w8
  EventUpValIconComponent_o *v60; // x22
  unsigned int v61; // w23
  __int64 v62; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t actMaxRarity[2]; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = num;
  v4 = this;
  if ( (byte_4B15667 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&EventUpValIconComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Math_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19, v20);
    this = (EventUpValIconComponent_o *)sub_1BCA7E0(&StringLiteral_19397/*"event_logo_mini_"*/, v21, v22);
    byte_4B15667 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  eventUpValItemList = v4->fields.eventUpValItemList;
  v4->fields.invalid = 0;
  if ( !eventUpValItemList )
    goto LABEL_110;
  if ( eventUpValItemList->max_length <= v3 )
LABEL_111:
    sub_1BCAA44(this, *(_QWORD *)&num);
  v24 = eventUpValItemList->m_Items[v3];
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v24 )
    goto LABEL_110;
  EventMargeItemUpValInfo__SetIcon(v24, v4->fields.iconSprite, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  paramLabel = (UIWidget_o *)v4->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, *(_QWORD *)&num);
  if ( !paramLabel )
    goto LABEL_110;
  UIWidget__set_width(paramLabel, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  v26 = v4->fields.paramLabel;
  this = (EventUpValIconComponent_o *)EventMargeItemUpValInfo__GetEventUpString(v24, 0LL);
  if ( !v26 )
    goto LABEL_110;
  UILabel__set_text(v26, (System_String_o *)this, 0LL);
  if ( v24->fields.isFriendPointBonus )
  {
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    v67.fields.r = 1.0;
    v67.fields.g = 1.0;
    v67.fields.b = 0.0;
    v67.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v67, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v27 = v4->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, *(_QWORD *)&num);
    if ( !v27 )
      goto LABEL_110;
    UILabel__SetCondensedScale(v27, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
LABEL_18:
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    v28 = 1;
    goto LABEL_28;
  }
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !v24->fields.isNotClassBoard )
  {
    if ( !this )
      goto LABEL_110;
    v69.fields.r = 1.0;
    v69.fields.g = 1.0;
    v69.fields.b = 1.0;
    v69.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v69, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)this, 15, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
    if ( !this )
      goto LABEL_110;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v45 = this;
    if ( !byte_4B109C6 )
    {
      this = (EventUpValIconComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&num, v44);
      byte_4B109C6 = 1;
    }
    if ( !v45 )
      goto LABEL_110;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v45,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0LL);
    goto LABEL_18;
  }
  if ( !this )
    goto LABEL_110;
  v68.fields.r = 1.0;
  v68.fields.g = 1.0;
  v68.fields.b = 1.0;
  v68.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v68, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  v29 = v4->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, *(_QWORD *)&num);
  if ( !v29 )
    goto LABEL_110;
  UILabel__SetCondensedScale(v29, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v28 = 2;
LABEL_28:
  UILabel__set_alignment((UILabel_o *)this, v28, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.baseObject;
  if ( !this )
    goto LABEL_110;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v33 = v30;
  v34 = v31;
  v35 = v32;
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
  if ( !this )
    goto LABEL_110;
  v37 = *(float *)&localPosition;
  LODWORD(v38) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)System_Math_TypeInfo;
  v39 = (UIWidget_o *)v4->fields.paramLabel;
  v40 = v38;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&num);
  if ( !v39 )
    goto LABEL_110;
  v41 = ceilf(v40);
  v42 = v41 == INFINITY ? 0x80000000 : (int)v41;
  UIWidget__set_width(v39, v42, 0LL);
  if ( v24->fields.isServantPoint )
  {
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v43 = v4->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, *(_QWORD *)&num);
    if ( !v43 )
      goto LABEL_110;
    num = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    *(_QWORD *)&num = (unsigned int)v4->fields.messageMaxWidth;
    v43 = v4->fields.paramLabel;
    if ( num < 1 )
    {
      this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
      if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, *(_QWORD *)&num);
      if ( !v43 )
        goto LABEL_110;
      num = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v43 )
    {
      goto LABEL_110;
    }
  }
  UILabel__SetCondensedScale(v43, num, 0LL);
  eventLogoSprite = (UnityEngine_Object_o *)v4->fields.eventLogoSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    this = (EventUpValIconComponent_o *)v4->fields.eventLogoSprite;
    if ( !this )
      goto LABEL_110;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    if ( v24->fields.isFriendshipUpForCampaign )
    {
      eventId = v24->fields.eventId;
      v49 = actMaxRarity;
      if ( !eventId )
        eventId = 80368;
      actMaxRarity[0] = eventId;
      v50 = v4->fields.eventLogoSprite;
    }
    else
    {
      v50 = v4->fields.eventLogoSprite;
      LODWORD(v49) = (_DWORD)v24 + 16;
    }
    v52 = System_Int32__ToString((int32_t)v49, 0LL);
    v54 = System_String__Concat_62401220((System_String_o *)StringLiteral_19397/*"event_logo_mini_"*/, v52, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v53);
    v51 = AtlasManager__SetBanner(v50, v54, 0LL);
  }
  else
  {
    v51 = 0;
  }
  eventNameBackSprite = (UnityEngine_Object_o *)v4->fields.eventNameBackSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&num);
  if ( UnityEngine_Object__op_Inequality(eventNameBackSprite, 0LL, 0LL) )
  {
    this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_110;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51, 0LL);
  }
  alignment = v4->fields.alignment;
  if ( alignment )
  {
    if ( alignment == 1 )
    {
      v33 = 0.0;
    }
    else if ( alignment == 2 )
    {
      this = (EventUpValIconComponent_o *)v4->fields.paramLabel;
      if ( !this )
        goto LABEL_110;
      this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_110;
      v33 = -(float)(v37
                   + (float)(v40
                           * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL))));
    }
  }
  else
  {
    v33 = (float)(v37 + v40) * -0.5;
  }
  this = (EventUpValIconComponent_o *)v4->fields.baseObject;
  if ( v24->fields.isNotClassBoard )
    v33 = v33 + -0.5;
  if ( !this )
    goto LABEL_110;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_110;
  v66.fields.x = v33;
  v66.fields.y = v34;
  v66.fields.z = v35;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v66, 0LL);
  if ( !v24->fields.funcGroupEntity )
    return;
  this = (EventUpValIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_110;
  if ( !PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)this,
          &skillName,
          &actMaxRarity[1],
          v4->fields.servantId,
          v4->fields.servantRarity,
          v4->fields.equipSvtId,
          v24->fields.eventId,
          0LL) )
    return;
  this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___),
        (this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventUpValIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !MasterData_object)
    || (v58 = this,
        (this = (EventUpValIconComponent_o *)ServantSkillMaster__getServantSkillList(
                                               (ServantSkillMaster_o *)MasterData_object,
                                               v4->fields.equipSvtId,
                                               0LL)) == 0LL) )
  {
LABEL_110:
    sub_1BCAA3C(this, *(_QWORD *)&num);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v60 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v61 = 0;
    while ( 1 )
    {
      if ( v61 >= m_CancellationTokenSource )
        goto LABEL_111;
      v62 = *((_QWORD *)&v60->fields.alignment + (int)v61);
      if ( !v62 )
        goto LABEL_110;
      if ( *(_DWORD *)(v62 + 48) )
      {
        if ( !v58 )
          goto LABEL_110;
        this = (EventUpValIconComponent_o *)SkillLvMaster__GetEntity(
                                              (SkillLvMaster_o *)v58,
                                              *(_DWORD *)(v62 + 28),
                                              1,
                                              0LL);
        if ( this )
        {
          funcGroupEntity = v24->fields.funcGroupEntity;
          if ( !funcGroupEntity )
            goto LABEL_110;
          this = (EventUpValIconComponent_o *)System_Array__IndexOf_int_(
                                                *(System_Int32_array **)&this->fields.alignment,
                                                funcGroupEntity->fields.funcId,
                                                (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)this & 0x80000000) == 0 )
            break;
        }
      }
      m_CancellationTokenSource = (int)v60->fields.m_CancellationTokenSource;
      if ( (int)++v61 >= m_CancellationTokenSource )
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