void __fastcall EventUpValIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4215128 & 1) == 0 )
  {
    sub_B0D8A4(&EventUpValIconComponent_TypeInfo, v1);
    byte_4215128 = 1;
  }
  EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX = 1000;
  EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX = 96;
  EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH = 112;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValIconComponent___ctor(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s4
  float v11; // s5
  float v12; // s6
  __int128 v13; // [xsp+0h] [xbp-30h] BYREF
  __int128 v14; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = 1.0;
  v8 = 1.0;
  v9 = 1.0;
  *(_QWORD *)&v14 = 0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  *(_OWORD *)&this->fields.COLOR_NORMAL.fields.b = v14;
  v15.fields.r = 0.32941;
  v13 = 0uLL;
  v15.fields.g = 0.32941;
  v15.fields.b = 0.32941;
  UnityEngine_Color___ctor_40757524(v15, v10, v11, v12, (const MethodInfo *)&v13);
  *(_OWORD *)&this->fields.COLOR_INVALID.fields.b = v13;
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0LL);
}


void __fastcall EventUpValIconComponent__Clear(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  *(_QWORD *)&this->fields.servantId = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantId, 0LL, v2, v3, v4, v5, v6, v7);
  EventUpValIconComponent__ClearParam(this, v9);
}


void __fastcall EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return 0;
  EventUpValIconComponent__SetIconLabel(this, count, v6);
  return 1;
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t *p_servantId; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( (byte_4215124 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, eventUpValItemList);
    byte_4215124 = 1;
  }
  p_servantId = &this->fields.servantId;
  if ( eventUpValItemList )
  {
    *(_QWORD *)&this->fields.servantId = eventUpValItemList;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_servantId,
      (System_Int32_array **)eventUpValItemList,
      *(System_String_array ***)&servantId,
      *(System_String_array ***)&servantRarity,
      *(System_Boolean_array ***)&equipSvtId,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.equipSvtId = servantId;
    *(_DWORD *)&this->fields.invalid = servantRarity;
    LODWORD(this->fields.COLOR_NORMAL.fields.r) = equipSvtId;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(
            (SwitchParameterDisplayManager_o *)Instance,
            (SwitchParameterDisplayComponent_o *)this,
            0LL),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_B0D97C(Instance);
    }
    EventUpValIconComponent__SetIconLabel(this, (int32_t)Instance->fields.webViewBase, v15);
  }
  else
  {
    *(_QWORD *)&this->fields.servantId = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_servantId,
      0LL,
      *(System_String_array ***)&servantId,
      *(System_String_array ***)&servantRarity,
      *(System_Boolean_array ***)&equipSvtId,
      (System_Int32_array **)method,
      v6,
      v7);
    EventUpValIconComponent__ClearParam(this, v16);
  }
}


void __fastcall EventUpValIconComponent__SetAlpha(
        EventUpValIconComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UIWidget_o *paramLabel; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  float v9; // s9
  float v10; // s10
  float v11; // s11
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *eventLogoSprite; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215127 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215127 = 1;
  }
  paramLabel = (UIWidget_o *)this->fields.paramLabel;
  if ( !paramLabel || !this->fields.eventNameBackSprite )
    goto LABEL_28;
  v6 = LOBYTE(this->fields.COLOR_NORMAL.fields.g) ? 128LL : 112LL;
  v7 = LOBYTE(this->fields.COLOR_NORMAL.fields.g) ? 124LL : 108LL;
  v8 = LOBYTE(this->fields.COLOR_NORMAL.fields.g) ? 120LL : 104LL;
  v9 = *(float *)((char *)&this->klass + v8);
  v10 = *(float *)((char *)&this->klass + v7);
  v11 = *(float *)((char *)&this->klass + v6);
  v14.fields.a = alpha;
  v14.fields.r = v9;
  v14.fields.g = v10;
  v14.fields.b = v11;
  UIWidget__set_color(paramLabel, v14, 0LL);
  paramLabel = (UIWidget_o *)this->fields.eventNameBackSprite;
  if ( !paramLabel )
    goto LABEL_28;
  v15.fields.r = v9;
  v15.fields.g = v10;
  v15.fields.b = v11;
  v15.fields.a = alpha;
  UIWidget__set_color(paramLabel, v15, 0LL);
  v12 = *(UnityEngine_Object_o **)&this->fields.messageMaxWidth;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    paramLabel = *(UIWidget_o **)&this->fields.messageMaxWidth;
    if ( !paramLabel )
      goto LABEL_28;
    v16.fields.r = paramLabel->fields.mColor.fields.r;
    v16.fields.g = paramLabel->fields.mColor.fields.g;
    v16.fields.b = paramLabel->fields.mColor.fields.b;
    v16.fields.a = alpha;
    UIWidget__set_color(paramLabel, v16, 0LL);
  }
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    paramLabel = (UIWidget_o *)this->fields.eventLogoSprite;
    if ( paramLabel )
    {
      v17.fields.r = paramLabel->fields.mColor.fields.r;
      v17.fields.g = paramLabel->fields.mColor.fields.g;
      v17.fields.b = paramLabel->fields.mColor.fields.b;
      v17.fields.a = alpha;
      UIWidget__set_color(paramLabel, v17, 0LL);
      return;
    }
LABEL_28:
    sub_B0D97C(paramLabel);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValIconComponent__SetIconLabel(
        EventUpValIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  const MethodInfo *v7; // x1
  float v8; // s0
  WebViewManager_o *Instance; // x0

  if ( (byte_4215125 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_4215125 = 1;
  }
  v5 = *(_QWORD *)&this->fields.servantId;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 24)) != 0 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      EventUpValIconComponent__SetParam(this, 0, method);
      v8 = 1.0;
    }
    else
    {
      EventUpValIconComponent__SetParam(this, count % (int)v6, method);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      v8 = *((float *)&Instance->fields.webViewBase + 1);
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
  __int64 v14; // x1
  __int64 v15; // x8
  EventMargeItemUpValInfo_o *v16; // x20
  UIWidget_o *eventNameBackSprite; // x21
  UILabel_o *v18; // x21
  int v19; // s3
  float v20; // s4
  float v21; // s5
  float v22; // s6
  UIWidget_o *v23; // x21
  float v24; // s0
  int v25; // s2
  float v26; // s1
  UILabel_o *v27; // x21
  int32_t v28; // w1
  UIWidget_o *v29; // x21
  float v30; // s0
  float v31; // s1
  float v32; // s2
  UILabel_o *v33; // x21
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s10
  float v38; // s8
  float v39; // s9
  unsigned int localPosition; // s0
  float v41; // s11
  float v42; // s0
  UIWidget_o *v43; // x21
  float v44; // s12
  float v45; // s1
  double v46; // d0
  UILabel_o *v47; // x21
  int SERVANT_POINT_X_SIZE_MAX; // w1
  float v49; // s0
  float v50; // s1
  float v51; // s2
  UnityEngine_Transform_o *transform; // x21
  int v53; // s0
  UnityEngine_Object_o *v56; // x21
  int eventId; // w8
  const char **p_name; // x0
  UISprite_o *v59; // x21
  bool v60; // w21
  System_String_o *v61; // x0
  System_String_o *v62; // x22
  UnityEngine_Object_o *eventLogoSprite; // x22
  int baseObject; // w8
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  EventUpValIconComponent_o *v66; // x21
  int v67; // w8
  EventUpValIconComponent_o *v68; // x22
  unsigned int v69; // w23
  __int64 v70; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  __int64 v72; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4215126 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&num);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B0D8A4(&EventUpValIconComponent_TypeInfo, v8);
    sub_B0D8A4(&System_Math_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    this = (EventUpValIconComponent_o *)sub_B0D8A4(&StringLiteral_18588/*"event_logo_mini_"*/, v14);
    byte_4215126 = 1;
  }
  methoda.return_type = 0LL;
  methoda.name = 0LL;
  v15 = *(_QWORD *)&v4->fields.servantId;
  LOBYTE(v4->fields.COLOR_NORMAL.fields.g) = 0;
  if ( !v15 )
    goto LABEL_120;
  if ( *(_DWORD *)(v15 + 24) <= (unsigned int)num )
  {
LABEL_121:
    v72 = sub_B0D9A8(this);
    sub_B0D948(v72, 0LL);
  }
  v16 = *(EventMargeItemUpValInfo_o **)(v15 + 8LL * num + 32);
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v16 )
    goto LABEL_120;
  EventMargeItemUpValInfo__SetIcon(v16, (UISprite_o *)v4->fields.paramLabel, 0LL);
  eventNameBackSprite = (UIWidget_o *)v4->fields.eventNameBackSprite;
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  }
  if ( !eventNameBackSprite )
    goto LABEL_120;
  UIWidget__set_width(eventNameBackSprite, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  v18 = (UILabel_o *)v4->fields.eventNameBackSprite;
  this = (EventUpValIconComponent_o *)EventMargeItemUpValInfo__GetEventUpString(v16, 0LL);
  if ( !v18 )
    goto LABEL_120;
  UILabel__set_text(v18, (System_String_o *)this, 0LL);
  if ( v16->fields.isFriendPointBonus )
  {
    v23 = (UIWidget_o *)v4->fields.eventNameBackSprite;
    v24 = 1.0;
    v25 = 0;
    v26 = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v19 - 3), v20, v21, v22, &methoda);
    if ( !v23 )
      goto LABEL_120;
    *(_QWORD *)&v75.fields.r = methoda.methodPointer;
    *(_QWORD *)&v75.fields.b = methoda.invoker_method;
    UIWidget__set_color(v23, v75, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v27 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    }
    if ( !v27 )
      goto LABEL_120;
    UILabel__SetCondensedScale(v27, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
    goto LABEL_20;
  }
  v29 = (UIWidget_o *)v4->fields.eventNameBackSprite;
  if ( !v16->fields.isNotClassBoard )
  {
    v49 = 1.0;
    v50 = 1.0;
    v51 = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v19 - 3), v20, v21, v22, &methoda);
    if ( !v29 )
      goto LABEL_120;
    *(_QWORD *)&v77.fields.r = methoda.methodPointer;
    *(_QWORD *)&v77.fields.b = methoda.invoker_method;
    UIWidget__set_color(v29, v77, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)this, 15, 0LL);
    this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v53, 0LL);
LABEL_20:
    this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    v28 = 1;
    goto LABEL_31;
  }
  v30 = 1.0;
  v31 = 1.0;
  v32 = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v19 - 3), v20, v21, v22, &methoda);
  if ( !v29 )
    goto LABEL_120;
  *(_QWORD *)&v76.fields.r = methoda.methodPointer;
  *(_QWORD *)&v76.fields.b = methoda.invoker_method;
  UIWidget__set_color(v29, v76, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  v33 = (UILabel_o *)v4->fields.eventNameBackSprite;
  if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  }
  if ( !v33 )
    goto LABEL_120;
  UILabel__SetCondensedScale(v33, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  v28 = 2;
LABEL_31:
  UILabel__set_alignment((UILabel_o *)this, v28, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.iconSprite;
  if ( !this )
    goto LABEL_120;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_120;
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  v37 = v34;
  v38 = v35;
  v39 = v36;
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_120;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  v41 = *(float *)&localPosition;
  LODWORD(v42) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
  v43 = (UIWidget_o *)v4->fields.eventNameBackSprite;
  v44 = v42;
  this = (EventUpValIconComponent_o *)System_Math_TypeInfo;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v43 )
    goto LABEL_120;
  v45 = ceilf(v44);
  v46 = v45 == INFINITY ? -v45 : v45;
  UIWidget__set_width(v43, (int)v46, 0LL);
  if ( v16->fields.isServantPoint )
  {
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v47 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    }
    if ( !v47 )
      goto LABEL_120;
    SERVANT_POINT_X_SIZE_MAX = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    SERVANT_POINT_X_SIZE_MAX = (int)v4->fields.eventUpValItemList;
    v47 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( SERVANT_POINT_X_SIZE_MAX < 1 )
    {
      this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
      if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
      }
      if ( !v47 )
        goto LABEL_120;
      SERVANT_POINT_X_SIZE_MAX = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v47 )
    {
      goto LABEL_120;
    }
  }
  UILabel__SetCondensedScale(v47, SERVANT_POINT_X_SIZE_MAX, 0LL);
  v56 = *(UnityEngine_Object_o **)&v4->fields.messageMaxWidth;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
  {
    this = *(EventUpValIconComponent_o **)&v4->fields.messageMaxWidth;
    if ( !this )
      goto LABEL_120;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    if ( v16->fields.isFriendshipUpForCampaign )
    {
      eventId = v16->fields.eventId;
      p_name = &methoda.name;
      if ( !eventId )
        eventId = 80368;
      LODWORD(methoda.name) = eventId;
      v59 = *(UISprite_o **)&v4->fields.messageMaxWidth;
    }
    else
    {
      v59 = *(UISprite_o **)&v4->fields.messageMaxWidth;
      LODWORD(p_name) = (_DWORD)v16 + 16;
    }
    v61 = System_Int32__ToString((int32_t)p_name, 0LL);
    v62 = System_String__Concat_43849904((System_String_o *)StringLiteral_18588/*"event_logo_mini_"*/, v61, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v60 = AtlasManager__SetBanner(v59, v62, 0LL);
  }
  else
  {
    v60 = 0;
  }
  eventLogoSprite = (UnityEngine_Object_o *)v4->fields.eventLogoSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    this = (EventUpValIconComponent_o *)v4->fields.eventLogoSprite;
    if ( !this )
      goto LABEL_120;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v60, 0LL);
  }
  baseObject = (int)v4->fields.baseObject;
  if ( baseObject )
  {
    if ( baseObject == 1 )
    {
      v37 = 0.0;
    }
    else if ( baseObject == 2 )
    {
      this = (EventUpValIconComponent_o *)v4->fields.eventNameBackSprite;
      if ( !this )
        goto LABEL_120;
      this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_120;
      v37 = -(float)(v41
                   + (float)(v44
                           * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL))));
    }
  }
  else
  {
    v37 = (float)(v41 + v44) * -0.5;
  }
  this = (EventUpValIconComponent_o *)v4->fields.iconSprite;
  if ( v16->fields.isNotClassBoard )
    v37 = v37 + -0.5;
  if ( !this )
    goto LABEL_120;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_120;
  v74.fields.x = v37;
  v74.fields.y = v38;
  v74.fields.z = v39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v74, 0LL);
  if ( !v16->fields.funcGroupEntity )
    return;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (EventUpValIconComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_120;
  if ( !PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)this,
          (System_String_o **)&methoda.return_type,
          (int32_t *)&methoda.name + 1,
          v4->fields.equipSvtId,
          *(_DWORD *)&v4->fields.invalid,
          LODWORD(v4->fields.COLOR_NORMAL.fields.r),
          v16->fields.eventId,
          0LL) )
    return;
  this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___),
        (this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventUpValIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (v66 = this,
        (this = (EventUpValIconComponent_o *)ServantSkillMaster__getServantSkillList(
                                               MasterData_WarQuestSelectionMaster,
                                               LODWORD(v4->fields.COLOR_NORMAL.fields.r),
                                               0LL)) == 0LL) )
  {
LABEL_120:
    sub_B0D97C(this);
  }
  v67 = (int)this->fields.baseObject;
  v68 = this;
  if ( v67 >= 1 )
  {
    v69 = 0;
    while ( 1 )
    {
      if ( v69 >= v67 )
        goto LABEL_121;
      v70 = *((_QWORD *)&v68->fields.iconSprite + (int)v69);
      if ( !v70 )
        goto LABEL_120;
      if ( *(_DWORD *)(v70 + 48) )
      {
        if ( !v66 )
          goto LABEL_120;
        this = (EventUpValIconComponent_o *)SkillLvMaster__GetEntity(
                                              (SkillLvMaster_o *)v66,
                                              *(_DWORD *)(v70 + 28),
                                              1,
                                              0LL);
        if ( this )
        {
          funcGroupEntity = v16->fields.funcGroupEntity;
          if ( !funcGroupEntity )
            goto LABEL_120;
          this = (EventUpValIconComponent_o *)System_Array__IndexOf_int_(
                                                (System_Int32_array *)this->fields.iconSprite,
                                                funcGroupEntity->fields.funcId,
                                                (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)this & 0x80000000) == 0 )
            break;
        }
      }
      v67 = (int)v68->fields.baseObject;
      if ( (int)++v69 >= v67 )
        return;
    }
    LOBYTE(v4->fields.COLOR_NORMAL.fields.g) = 1;
  }
}


bool __fastcall EventUpValIconComponent__UpdateAlpha(
        EventUpValIconComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)&this->fields.servantId;
  if ( v3 && *(int *)(v3 + 24) >= 2 )
    EventUpValIconComponent__SetAlpha(this, alpha, method);
  return 1;
}