void __fastcall EventUpValIconComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84FC & 1) == 0 )
  {
    sub_B5D5C4(&EventUpValIconComponent_TypeInfo, v1, v2, v3);
    byte_42E84FC = 1;
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
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  *(_OWORD *)&this->fields.COLOR_NORMAL.fields.b = v14;
  v15.fields.r = 0.32941;
  v13 = 0uLL;
  v15.fields.g = 0.32941;
  v15.fields.b = 0.32941;
  UnityEngine_Color___ctor_41567816(v15, v10, v11, v12, (const MethodInfo *)&v13);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantId, 0LL, v2, v3, v4, v5, v6, v7);
  EventUpValIconComponent__ClearParam(this, v9);
}


void __fastcall EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return 0;
  EventUpValIconComponent__SetIconLabel(this, count, v7);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1

  if ( (byte_42E84F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__,
      (_DWORD)eventUpValItemList,
      servantId,
      *(_QWORD *)&servantRarity);
    byte_42E84F8 = 1;
  }
  p_servantId = &this->fields.servantId;
  if ( eventUpValItemList )
  {
    *(_QWORD *)&this->fields.servantId = eventUpValItemList;
    sub_B5D560(
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !Instance
      || (SwitchParameterDisplayManager__AddComponent(
            (SwitchParameterDisplayManager_o *)Instance,
            (SwitchParameterDisplayComponent_o *)this,
            0LL),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
    {
      sub_B5D69C(Instance, v15);
    }
    EventUpValIconComponent__SetIconLabel(this, (int32_t)Instance->fields.webViewBase, v16);
  }
  else
  {
    *(_QWORD *)&this->fields.servantId = 0LL;
    sub_B5D560(
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
  int v3; // w2
  __int64 v4; // x3
  UIWidget_o *paramLabel; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x10
  float v11; // s9
  float v12; // s10
  float v13; // s11
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *eventLogoSprite; // x20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E84FB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E84FB = 1;
  }
  paramLabel = (UIWidget_o *)this->fields.paramLabel;
  if ( !paramLabel || !this->fields.eventNameBackSprite )
    goto LABEL_28;
  v8 = LOBYTE(this->fields.COLOR_NORMAL.fields.g) ? 128LL : 112LL;
  v9 = LOBYTE(this->fields.COLOR_NORMAL.fields.g) ? 124LL : 108LL;
  v10 = LOBYTE(this->fields.COLOR_NORMAL.fields.g) ? 120LL : 104LL;
  v11 = *(float *)((char *)&this->klass + v10);
  v12 = *(float *)((char *)&this->klass + v9);
  v13 = *(float *)((char *)&this->klass + v8);
  v16.fields.a = alpha;
  v16.fields.r = v11;
  v16.fields.g = v12;
  v16.fields.b = v13;
  UIWidget__set_color(paramLabel, v16, 0LL);
  paramLabel = (UIWidget_o *)this->fields.eventNameBackSprite;
  if ( !paramLabel )
    goto LABEL_28;
  v17.fields.r = v11;
  v17.fields.g = v12;
  v17.fields.b = v13;
  v17.fields.a = alpha;
  UIWidget__set_color(paramLabel, v17, 0LL);
  v14 = *(UnityEngine_Object_o **)&this->fields.messageMaxWidth;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    paramLabel = *(UIWidget_o **)&this->fields.messageMaxWidth;
    if ( !paramLabel )
      goto LABEL_28;
    v18.fields.r = paramLabel->fields.mColor.fields.r;
    v18.fields.g = paramLabel->fields.mColor.fields.g;
    v18.fields.b = paramLabel->fields.mColor.fields.b;
    v18.fields.a = alpha;
    UIWidget__set_color(paramLabel, v18, 0LL);
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
      v19.fields.r = paramLabel->fields.mColor.fields.r;
      v19.fields.g = paramLabel->fields.mColor.fields.g;
      v19.fields.b = paramLabel->fields.mColor.fields.b;
      v19.fields.a = alpha;
      UIWidget__set_color(paramLabel, v19, 0LL);
      return;
    }
LABEL_28:
    sub_B5D69C(paramLabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValIconComponent__SetIconLabel(
        EventUpValIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x8
  __int64 v7; // x8
  const MethodInfo *v8; // x1
  float v9; // s0
  WebViewManager_o *Instance; // x0

  if ( (byte_42E84F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, count, (_DWORD)method, v3);
    byte_42E84F9 = 1;
  }
  v6 = *(_QWORD *)&this->fields.servantId;
  if ( v6 && (v7 = *(_QWORD *)(v6 + 24)) != 0 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      EventUpValIconComponent__SetParam(this, 0, method);
      v9 = 1.0;
    }
    else
    {
      EventUpValIconComponent__SetParam(this, count % (int)v7, method);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v8);
      v9 = *((float *)&Instance->fields.webViewBase + 1);
    }
    EventUpValIconComponent__SetAlpha(this, v9, v8);
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
  __int64 v3; // x3
  int32_t v4; // w20
  EventUpValIconComponent_o *v5; // x19
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x8
  EventMargeItemUpValInfo_o *v37; // x20
  UIWidget_o *eventNameBackSprite; // x21
  UILabel_o *v39; // x21
  int v40; // s3
  float v41; // s4
  float v42; // s5
  float v43; // s6
  UIWidget_o *v44; // x21
  float v45; // s0
  int v46; // s2
  float v47; // s1
  UILabel_o *v48; // x21
  int32_t v49; // w1
  UIWidget_o *v50; // x21
  float v51; // s0
  float v52; // s1
  float v53; // s2
  UILabel_o *v54; // x21
  float v55; // s0
  float v56; // s1
  float v57; // s2
  float v58; // s10
  float v59; // s8
  float v60; // s9
  unsigned int localPosition; // s0
  float v62; // s11
  float v63; // s0
  UIWidget_o *v64; // x21
  float v65; // s12
  float v66; // s1
  double v67; // d0
  UILabel_o *v68; // x21
  float v69; // s0
  float v70; // s1
  float v71; // s2
  UnityEngine_Transform_o *transform; // x21
  int v73; // s0
  UnityEngine_Object_o *v76; // x21
  int eventId; // w8
  const char **p_name; // x0
  UISprite_o *v79; // x21
  bool v80; // w21
  System_String_o *v81; // x0
  System_String_o *v82; // x22
  UnityEngine_Object_o *eventLogoSprite; // x22
  int baseObject; // w8
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x22
  EventUpValIconComponent_o *v86; // x21
  int v87; // w8
  EventUpValIconComponent_o *v88; // x22
  unsigned int v89; // w23
  __int64 v90; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  __int64 v92; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = num;
  v5 = this;
  if ( (byte_42E84FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, num, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v12, v13, v14);
    sub_B5D5C4(&EventUpValIconComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Math_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v30, v31, v32);
    this = (EventUpValIconComponent_o *)sub_B5D5C4(&StringLiteral_18760/*"event_logo_mini_"*/, v33, v34, v35);
    byte_42E84FA = 1;
  }
  methoda.return_type = 0LL;
  methoda.name = 0LL;
  v36 = *(_QWORD *)&v5->fields.servantId;
  LOBYTE(v5->fields.COLOR_NORMAL.fields.g) = 0;
  if ( !v36 )
    goto LABEL_120;
  if ( *(_DWORD *)(v36 + 24) <= (unsigned int)v4 )
  {
LABEL_121:
    v92 = sub_B5D6C8(this);
    sub_B5D668(v92, 0LL);
  }
  v37 = *(EventMargeItemUpValInfo_o **)(v36 + 8LL * v4 + 32);
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !v37 )
    goto LABEL_120;
  EventMargeItemUpValInfo__SetIcon(v37, (UISprite_o *)v5->fields.paramLabel, 0LL);
  eventNameBackSprite = (UIWidget_o *)v5->fields.eventNameBackSprite;
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  }
  if ( !eventNameBackSprite )
    goto LABEL_120;
  UIWidget__set_width(eventNameBackSprite, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  v39 = (UILabel_o *)v5->fields.eventNameBackSprite;
  this = (EventUpValIconComponent_o *)EventMargeItemUpValInfo__GetEventUpString(v37, 0LL);
  if ( !v39 )
    goto LABEL_120;
  UILabel__set_text(v39, (System_String_o *)this, 0LL);
  if ( v37->fields.isFriendPointBonus )
  {
    v44 = (UIWidget_o *)v5->fields.eventNameBackSprite;
    v45 = 1.0;
    v46 = 0;
    v47 = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v40 - 3), v41, v42, v43, &methoda);
    if ( !v44 )
      goto LABEL_120;
    *(_QWORD *)&v95.fields.r = methoda.methodPointer;
    *(_QWORD *)&v95.fields.b = methoda.invoker_method;
    UIWidget__set_color(v44, v95, 0LL);
    this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v48 = (UILabel_o *)v5->fields.eventNameBackSprite;
    if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    }
    if ( !v48 )
      goto LABEL_120;
    UILabel__SetCondensedScale(v48, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
    goto LABEL_20;
  }
  v50 = (UIWidget_o *)v5->fields.eventNameBackSprite;
  if ( !v37->fields.isNotClassBoard )
  {
    v69 = 1.0;
    v70 = 1.0;
    v71 = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v40 - 3), v41, v42, v43, &methoda);
    if ( !v50 )
      goto LABEL_120;
    *(_QWORD *)&v97.fields.r = methoda.methodPointer;
    *(_QWORD *)&v97.fields.b = methoda.invoker_method;
    UIWidget__set_color(v50, v97, 0LL);
    this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)this, 15, 0LL);
    this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_120;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v73, 0LL);
LABEL_20:
    this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
    if ( !this )
      goto LABEL_120;
    v49 = 1;
    goto LABEL_31;
  }
  v51 = 1.0;
  v52 = 1.0;
  v53 = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v40 - 3), v41, v42, v43, &methoda);
  if ( !v50 )
    goto LABEL_120;
  *(_QWORD *)&v96.fields.r = methoda.methodPointer;
  *(_QWORD *)&v96.fields.b = methoda.invoker_method;
  UIWidget__set_color(v50, v96, 0LL);
  this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  UILabel__set_fontSize((UILabel_o *)this, 13, 0LL);
  this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
  v54 = (UILabel_o *)v5->fields.eventNameBackSprite;
  if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  }
  if ( !v54 )
    goto LABEL_120;
  UILabel__SetCondensedScale(v54, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  v49 = 2;
LABEL_31:
  UILabel__set_alignment((UILabel_o *)this, v49, 0LL);
  this = (EventUpValIconComponent_o *)v5->fields.iconSprite;
  if ( !this )
    goto LABEL_120;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_120;
  *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  v58 = v55;
  v59 = v56;
  v60 = v57;
  this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_120;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
  if ( !this )
    goto LABEL_120;
  v62 = *(float *)&localPosition;
  LODWORD(v63) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
  v64 = (UIWidget_o *)v5->fields.eventNameBackSprite;
  v65 = v63;
  this = (EventUpValIconComponent_o *)System_Math_TypeInfo;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v64 )
    goto LABEL_120;
  v66 = ceilf(v65);
  v67 = v66 == INFINITY ? -v66 : v66;
  UIWidget__set_width(v64, (int)v67, 0LL);
  if ( v37->fields.isServantPoint )
  {
    this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
    v68 = (UILabel_o *)v5->fields.eventNameBackSprite;
    if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    }
    if ( !v68 )
      goto LABEL_120;
    num = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    *(_QWORD *)&num = LODWORD(v5->fields.eventUpValItemList);
    v68 = (UILabel_o *)v5->fields.eventNameBackSprite;
    if ( num < 1 )
    {
      this = (EventUpValIconComponent_o *)EventUpValIconComponent_TypeInfo;
      if ( (BYTE3(EventUpValIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
      }
      if ( !v68 )
        goto LABEL_120;
      num = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v68 )
    {
      goto LABEL_120;
    }
  }
  UILabel__SetCondensedScale(v68, num, 0LL);
  v76 = *(UnityEngine_Object_o **)&v5->fields.messageMaxWidth;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
  {
    this = *(EventUpValIconComponent_o **)&v5->fields.messageMaxWidth;
    if ( !this )
      goto LABEL_120;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    if ( v37->fields.isFriendshipUpForCampaign )
    {
      eventId = v37->fields.eventId;
      p_name = &methoda.name;
      if ( !eventId )
        eventId = 80368;
      LODWORD(methoda.name) = eventId;
      v79 = *(UISprite_o **)&v5->fields.messageMaxWidth;
    }
    else
    {
      v79 = *(UISprite_o **)&v5->fields.messageMaxWidth;
      LODWORD(p_name) = (_DWORD)v37 + 16;
    }
    v81 = System_Int32__ToString((int32_t)p_name, 0LL);
    v82 = System_String__Concat_44577788((System_String_o *)StringLiteral_18760/*"event_logo_mini_"*/, v81, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v80 = AtlasManager__SetBanner(v79, v82, 0LL);
  }
  else
  {
    v80 = 0;
  }
  eventLogoSprite = (UnityEngine_Object_o *)v5->fields.eventLogoSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    this = (EventUpValIconComponent_o *)v5->fields.eventLogoSprite;
    if ( !this )
      goto LABEL_120;
    this = (EventUpValIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v80, 0LL);
  }
  baseObject = (int)v5->fields.baseObject;
  if ( baseObject )
  {
    if ( baseObject == 1 )
    {
      v58 = 0.0;
    }
    else if ( baseObject == 2 )
    {
      this = (EventUpValIconComponent_o *)v5->fields.eventNameBackSprite;
      if ( !this )
        goto LABEL_120;
      this = (EventUpValIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_120;
      v58 = -(float)(v62
                   + (float)(v65
                           * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL))));
    }
  }
  else
  {
    v58 = (float)(v62 + v65) * -0.5;
  }
  this = (EventUpValIconComponent_o *)v5->fields.iconSprite;
  if ( v37->fields.isNotClassBoard )
    v58 = v58 + -0.5;
  if ( !this )
    goto LABEL_120;
  this = (EventUpValIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_120;
  v94.fields.x = v58;
  v94.fields.y = v59;
  v94.fields.z = v60;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v94, 0LL);
  if ( !v37->fields.funcGroupEntity )
    return;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (EventUpValIconComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_120;
  if ( !PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)this,
          (System_String_o **)&methoda.return_type,
          (int32_t *)&methoda.name + 1,
          v5->fields.equipSvtId,
          *(_DWORD *)&v5->fields.invalid,
          LODWORD(v5->fields.COLOR_NORMAL.fields.r),
          v37->fields.eventId,
          0LL) )
    return;
  this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)this,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___),
        (this = (EventUpValIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (EventUpValIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (v86 = this,
        (this = (EventUpValIconComponent_o *)ServantSkillMaster__getServantSkillList(
                                               MasterData_WarQuestSelectionMaster,
                                               LODWORD(v5->fields.COLOR_NORMAL.fields.r),
                                               0LL)) == 0LL) )
  {
LABEL_120:
    sub_B5D69C(this, *(_QWORD *)&num);
  }
  v87 = (int)this->fields.baseObject;
  v88 = this;
  if ( v87 >= 1 )
  {
    v89 = 0;
    while ( 1 )
    {
      if ( v89 >= v87 )
        goto LABEL_121;
      v90 = *((_QWORD *)&v88->fields.iconSprite + (int)v89);
      if ( !v90 )
        goto LABEL_120;
      if ( *(_DWORD *)(v90 + 48) )
      {
        if ( !v86 )
          goto LABEL_120;
        this = (EventUpValIconComponent_o *)SkillLvMaster__GetEntity(
                                              (SkillLvMaster_o *)v86,
                                              *(_DWORD *)(v90 + 28),
                                              1,
                                              0LL);
        if ( this )
        {
          funcGroupEntity = v37->fields.funcGroupEntity;
          if ( !funcGroupEntity )
            goto LABEL_120;
          this = (EventUpValIconComponent_o *)System_Array__IndexOf_int_(
                                                (System_Int32_array *)this->fields.iconSprite,
                                                funcGroupEntity->fields.funcId,
                                                (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
          if ( ((unsigned int)this & 0x80000000) == 0 )
            break;
        }
      }
      v87 = (int)v88->fields.baseObject;
      if ( (int)++v89 >= v87 )
        return;
    }
    LOBYTE(v5->fields.COLOR_NORMAL.fields.g) = 1;
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