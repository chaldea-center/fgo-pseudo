void __fastcall EventUpValIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9C3B & 1) == 0 )
  {
    sub_B16FFC(&EventUpValIconComponent_TypeInfo, v1);
    byte_40F9C3B = 1;
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
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  *(_OWORD *)&this->fields.COLOR_NORMAL.fields.b = v14;
  v15.fields.r = 0.32941;
  v13 = 0uLL;
  v15.fields.g = 0.32941;
  v15.fields.b = 0.32941;
  UnityEngine_Color___ctor_40666012(v15, v10, v11, v12, (const MethodInfo *)&v13);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantId, 0LL, v2, v3, v4, v5, v6, v7);
  EventUpValIconComponent__ClearParam(this, v9);
}


void __fastcall EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
    sub_B170D4();
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
  SwitchParameterDisplayManager_o *Instance; // x0
  WebViewManager_o *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1

  if ( (byte_40F9C37 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, eventUpValItemList);
    byte_40F9C37 = 1;
  }
  p_servantId = &this->fields.servantId;
  if ( eventUpValItemList )
  {
    *(_QWORD *)&this->fields.servantId = eventUpValItemList;
    sub_B16F98(
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
    Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(Instance, (SwitchParameterDisplayComponent_o *)this, 0LL),
          (v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_B170D4();
    }
    EventUpValIconComponent__SetIconLabel(this, (int32_t)v15->fields.webViewBase, v16);
  }
  else
  {
    *(_QWORD *)&this->fields.servantId = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_servantId,
      0LL,
      *(System_String_array ***)&servantId,
      *(System_String_array ***)&servantRarity,
      *(System_Boolean_array ***)&equipSvtId,
      (System_Int32_array **)method,
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
  UIWidget_o *paramLabel; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  float v9; // s9
  float v10; // s10
  float v11; // s11
  UIWidget_o *eventNameBackSprite; // x0
  UnityEngine_Object_o *v13; // x20
  UIWidget_o *v14; // x0
  UnityEngine_Object_o *eventLogoSprite; // x20
  UIWidget_o *v16; // x0
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9C3A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9C3A = 1;
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
  v17.fields.a = alpha;
  v17.fields.r = v9;
  v17.fields.g = v10;
  v17.fields.b = v11;
  UIWidget__set_color(paramLabel, v17, 0LL);
  eventNameBackSprite = (UIWidget_o *)this->fields.eventNameBackSprite;
  if ( !eventNameBackSprite )
    goto LABEL_28;
  v18.fields.r = v9;
  v18.fields.g = v10;
  v18.fields.b = v11;
  v18.fields.a = alpha;
  UIWidget__set_color(eventNameBackSprite, v18, 0LL);
  v13 = *(UnityEngine_Object_o **)&this->fields.messageMaxWidth;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    v14 = *(UIWidget_o **)&this->fields.messageMaxWidth;
    if ( !v14 )
      goto LABEL_28;
    v19.fields.r = v14->fields.mColor.fields.r;
    v19.fields.g = v14->fields.mColor.fields.g;
    v19.fields.b = v14->fields.mColor.fields.b;
    v19.fields.a = alpha;
    UIWidget__set_color(v14, v19, 0LL);
  }
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.eventLogoSprite;
    if ( v16 )
    {
      v20.fields.r = v16->fields.mColor.fields.r;
      v20.fields.g = v16->fields.mColor.fields.g;
      v20.fields.b = v16->fields.mColor.fields.b;
      v20.fields.a = alpha;
      UIWidget__set_color(v16, v20, 0LL);
      return;
    }
LABEL_28:
    sub_B170D4();
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

  if ( (byte_40F9C38 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_40F9C38 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
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
  __int64 v15; // x1
  __int64 v16; // x8
  EventMargeItemUpValInfo_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *eventNameBackSprite; // x21
  UILabel_o *v20; // x21
  System_String_o *EventUpString; // x0
  int v22; // s3
  float v23; // s4
  float v24; // s5
  float v25; // s6
  UIWidget_o *v26; // x21
  float v27; // s0
  int v28; // s2
  float v29; // s1
  UILabel_o *v30; // x0
  UILabel_o *v31; // x21
  UILabel_o *v32; // x0
  int32_t v33; // w1
  UIWidget_o *v34; // x21
  float v35; // s0
  float v36; // s1
  float v37; // s2
  UILabel_o *v38; // x0
  UILabel_o *v39; // x21
  UnityEngine_GameObject_o *iconSprite; // x0
  UnityEngine_Transform_o *v41; // x0
  float v42; // s0
  float v43; // s1
  float v44; // s2
  UnityEngine_Component_o *v45; // x0
  float v46; // s10
  float v47; // s8
  float v48; // s9
  UnityEngine_Transform_o *v49; // x0
  unsigned int localPosition; // s0
  UILabel_o *v51; // x0
  float v52; // s11
  float v53; // s0
  UIWidget_o *v54; // x21
  float v55; // s12
  float v56; // s1
  double v57; // d0
  UILabel_o *v58; // x21
  int SERVANT_POINT_X_SIZE_MAX; // w1
  float v60; // s0
  float v61; // s1
  float v62; // s2
  UILabel_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_Transform_o *transform; // x21
  int v66; // s0
  UnityEngine_Object_o *v69; // x21
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  UISprite_o *v72; // x21
  System_String_o *v73; // x22
  bool v74; // w21
  System_String_o *v75; // x0
  UnityEngine_Object_o *eventLogoSprite; // x22
  UnityEngine_Component_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  int baseObject; // w8
  UnityEngine_Component_o *v80; // x0
  UnityEngine_Transform_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Transform_o *v83; // x0
  PartyOrganizationUtility_o *v84; // x0
  WebViewManager_o *Instance; // x0
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v87; // x0
  WarQuestSelectionMaster_o *v88; // x0
  SkillLvMaster_o *v89; // x21
  int v90; // w8
  EventUpValIconComponent_o *v91; // x22
  unsigned int v92; // w23
  __int64 v93; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_40F9C39 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&num);
    sub_B16FFC(&AtlasManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B16FFC(&EventUpValIconComponent_TypeInfo, v8);
    sub_B16FFC(&System_Math_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    sub_B16FFC(&StringLiteral_18460, v14);
    this = (EventUpValIconComponent_o *)sub_B16FFC(&StringLiteral_18461, v15);
    byte_40F9C39 = 1;
  }
  methoda.return_type = 0LL;
  HIDWORD(methoda.name) = 0;
  v16 = *(_QWORD *)&v4->fields.servantId;
  LOBYTE(v4->fields.COLOR_NORMAL.fields.g) = 0;
  if ( !v16 )
    goto LABEL_120;
  if ( *(_DWORD *)(v16 + 24) <= (unsigned int)num )
  {
LABEL_121:
    sub_B17100(this, *(_QWORD *)&num, method);
    sub_B170A0();
  }
  v17 = *(EventMargeItemUpValInfo_o **)(v16 + 8LL * num + 32);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !v17 )
    goto LABEL_120;
  EventMargeItemUpValInfo__SetIcon(v17, (UISprite_o *)v4->fields.paramLabel, 0LL);
  eventNameBackSprite = (UIWidget_o *)v4->fields.eventNameBackSprite;
  if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  }
  if ( !eventNameBackSprite )
    goto LABEL_120;
  UIWidget__set_width(eventNameBackSprite, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  v20 = (UILabel_o *)v4->fields.eventNameBackSprite;
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(v17, 0LL);
  if ( !v20 )
    goto LABEL_120;
  UILabel__set_text(v20, EventUpString, 0LL);
  if ( v17->fields.isFriendPointBonus )
  {
    v26 = (UIWidget_o *)v4->fields.eventNameBackSprite;
    v27 = 1.0;
    v28 = 0;
    v29 = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v22 - 3), v23, v24, v25, &methoda);
    if ( !v26 )
      goto LABEL_120;
    *(_QWORD *)&v97.fields.r = methoda.methodPointer;
    *(_QWORD *)&v97.fields.b = methoda.invoker_method;
    UIWidget__set_color(v26, v97, 0LL);
    v30 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( !v30 )
      goto LABEL_120;
    UILabel__set_fontSize(v30, 13, 0LL);
    v31 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    }
    if ( !v31 )
      goto LABEL_120;
    UILabel__SetCondensedScale(v31, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
    goto LABEL_20;
  }
  v34 = (UIWidget_o *)v4->fields.eventNameBackSprite;
  if ( !v17->fields.isNotClassBoard )
  {
    v60 = 1.0;
    v61 = 1.0;
    v62 = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v22 - 3), v23, v24, v25, &methoda);
    if ( !v34 )
      goto LABEL_120;
    *(_QWORD *)&v99.fields.r = methoda.methodPointer;
    *(_QWORD *)&v99.fields.b = methoda.invoker_method;
    UIWidget__set_color(v34, v99, 0LL);
    v63 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( !v63 )
      goto LABEL_120;
    UILabel__set_fontSize(v63, 15, 0LL);
    v64 = (UnityEngine_Component_o *)v4->fields.eventNameBackSprite;
    if ( !v64 )
      goto LABEL_120;
    transform = UnityEngine_Component__get_transform(v64, 0LL);
    *(UnityEngine_Vector3_o *)&v66 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v66, 0LL);
LABEL_20:
    v32 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( !v32 )
      goto LABEL_120;
    v33 = 1;
    goto LABEL_31;
  }
  v35 = 1.0;
  v36 = 1.0;
  v37 = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v22 - 3), v23, v24, v25, &methoda);
  if ( !v34 )
    goto LABEL_120;
  *(_QWORD *)&v98.fields.r = methoda.methodPointer;
  *(_QWORD *)&v98.fields.b = methoda.invoker_method;
  UIWidget__set_color(v34, v98, 0LL);
  v38 = (UILabel_o *)v4->fields.eventNameBackSprite;
  if ( !v38 )
    goto LABEL_120;
  UILabel__set_fontSize(v38, 13, 0LL);
  v39 = (UILabel_o *)v4->fields.eventNameBackSprite;
  if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  }
  if ( !v39 )
    goto LABEL_120;
  UILabel__SetCondensedScale(v39, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  v32 = (UILabel_o *)v4->fields.eventNameBackSprite;
  if ( !v32 )
    goto LABEL_120;
  v33 = 2;
LABEL_31:
  UILabel__set_alignment(v32, v33, 0LL);
  iconSprite = (UnityEngine_GameObject_o *)v4->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_120;
  v41 = UnityEngine_GameObject__get_transform(iconSprite, 0LL);
  if ( !v41 )
    goto LABEL_120;
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition(v41, 0LL);
  v45 = (UnityEngine_Component_o *)v4->fields.eventNameBackSprite;
  if ( !v45 )
    goto LABEL_120;
  v46 = v42;
  v47 = v43;
  v48 = v44;
  v49 = UnityEngine_Component__get_transform(v45, 0LL);
  if ( !v49 )
    goto LABEL_120;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v49, 0LL);
  v51 = (UILabel_o *)v4->fields.eventNameBackSprite;
  if ( !v51 )
    goto LABEL_120;
  v52 = *(float *)&localPosition;
  LODWORD(v53) = *(_QWORD *)&UILabel__get_printedSize(v51, 0LL);
  v54 = (UIWidget_o *)v4->fields.eventNameBackSprite;
  v55 = v53;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v54 )
    goto LABEL_120;
  v56 = ceilf(v55);
  v57 = v56 == INFINITY ? -v56 : v56;
  UIWidget__set_width(v54, (int)v57, 0LL);
  if ( v17->fields.isServantPoint )
  {
    v58 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    }
    if ( !v58 )
      goto LABEL_120;
    SERVANT_POINT_X_SIZE_MAX = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    SERVANT_POINT_X_SIZE_MAX = (int)v4->fields.eventUpValItemList;
    v58 = (UILabel_o *)v4->fields.eventNameBackSprite;
    if ( SERVANT_POINT_X_SIZE_MAX < 1 )
    {
      if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
      }
      if ( !v58 )
        goto LABEL_120;
      SERVANT_POINT_X_SIZE_MAX = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v58 )
    {
      goto LABEL_120;
    }
  }
  UILabel__SetCondensedScale(v58, SERVANT_POINT_X_SIZE_MAX, 0LL);
  v69 = *(UnityEngine_Object_o **)&v4->fields.messageMaxWidth;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
  {
    v70 = *(UnityEngine_Component_o **)&v4->fields.messageMaxWidth;
    if ( !v70 )
      goto LABEL_120;
    v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
    if ( !v71 )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive(v71, 1, 0LL);
    v72 = *(UISprite_o **)&v4->fields.messageMaxWidth;
    if ( v17->fields.isFriendshipUpForCampaign )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v73 = (System_String_o *)StringLiteral_18461;
    }
    else
    {
      v75 = System_Int32__ToString((int)v17 + 16, 0LL);
      v73 = System_String__Concat_43743732((System_String_o *)StringLiteral_18460, v75, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
    }
    v74 = AtlasManager__SetBanner(v72, v73, 0LL);
  }
  else
  {
    v74 = 0;
  }
  eventLogoSprite = (UnityEngine_Object_o *)v4->fields.eventLogoSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    v77 = (UnityEngine_Component_o *)v4->fields.eventLogoSprite;
    if ( !v77 )
      goto LABEL_120;
    v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
    if ( !v78 )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive(v78, v74, 0LL);
  }
  baseObject = (int)v4->fields.baseObject;
  if ( baseObject )
  {
    if ( baseObject == 1 )
    {
      v46 = 0.0;
    }
    else if ( baseObject == 2 )
    {
      v80 = (UnityEngine_Component_o *)v4->fields.eventNameBackSprite;
      if ( !v80 )
        goto LABEL_120;
      v81 = UnityEngine_Component__get_transform(v80, 0LL);
      if ( !v81 )
        goto LABEL_120;
      v46 = -(float)(v52 + (float)(v55 * COERCE_FLOAT(UnityEngine_Transform__get_localScale(v81, 0LL))));
    }
  }
  else
  {
    v46 = (float)(v52 + v55) * -0.5;
  }
  v82 = (UnityEngine_GameObject_o *)v4->fields.iconSprite;
  if ( v17->fields.isNotClassBoard )
    v46 = v46 + -0.5;
  if ( !v82 )
    goto LABEL_120;
  v83 = UnityEngine_GameObject__get_transform(v82, 0LL);
  if ( !v83 )
    goto LABEL_120;
  v96.fields.x = v46;
  v96.fields.y = v47;
  v96.fields.z = v48;
  UnityEngine_Transform__set_localPosition(v83, v96, 0LL);
  if ( !v17->fields.funcGroupEntity )
    return;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v84 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v84 )
    goto LABEL_120;
  if ( !PartyOrganizationUtility__IsRarityRestriction(
          v84,
          (System_String_o **)&methoda.return_type,
          (int32_t *)&methoda.name + 1,
          v4->fields.equipSvtId,
          *(_DWORD *)&v4->fields.invalid,
          LODWORD(v4->fields.COLOR_NORMAL.fields.r),
          v17->fields.eventId,
          0LL) )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___),
        (v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v88 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v87,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (v89 = (SkillLvMaster_o *)v88,
        (this = (EventUpValIconComponent_o *)ServantSkillMaster__getServantSkillList(
                                               MasterData_WarQuestSelectionMaster,
                                               LODWORD(v4->fields.COLOR_NORMAL.fields.r),
                                               0LL)) == 0LL) )
  {
LABEL_120:
    sub_B170D4();
  }
  v90 = (int)this->fields.baseObject;
  v91 = this;
  if ( v90 >= 1 )
  {
    v92 = 0;
    while ( 1 )
    {
      if ( v92 >= v90 )
        goto LABEL_121;
      v93 = *((_QWORD *)&v91->fields.iconSprite + (int)v92);
      if ( !v93 )
        goto LABEL_120;
      if ( *(_DWORD *)(v93 + 48) )
      {
        if ( !v89 )
          goto LABEL_120;
        this = (EventUpValIconComponent_o *)SkillLvMaster__GetEntity(v89, *(_DWORD *)(v93 + 28), 1, 0LL);
        if ( this )
        {
          funcGroupEntity = v17->fields.funcGroupEntity;
          if ( !funcGroupEntity )
            goto LABEL_120;
          this = (EventUpValIconComponent_o *)System_Array__IndexOf_int_(
                                                (System_Int32_array *)this->fields.iconSprite,
                                                funcGroupEntity->fields.funcId,
                                                (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)this & 0x80000000) == 0 )
            break;
        }
      }
      v90 = (int)v91->fields.baseObject;
      if ( (int)++v92 >= v90 )
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