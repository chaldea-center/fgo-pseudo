void __fastcall EventUpValIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventUpValIconComponent_StaticFields *static_fields; // x8

  if ( (byte_4B43E9F & 1) == 0 )
  {
    sub_1BDB878(&EventUpValIconComponent_TypeInfo, v1);
    byte_4B43E9F = 1;
  }
  static_fields = EventUpValIconComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0x60000003E8LL;
  static_fields->NORMAL_MESSAGE_MAX_WIDTH = 112;
}


void __fastcall EventUpValIconComponent___ctor(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COLOR_NORMAL = _Q1;
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_BEB810;
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0LL);
}


void __fastcall EventUpValIconComponent__Clear(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.eventUpValItemList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, 0, v2, v3);
  EventUpValIconComponent__ClearParam(this, v5);
}


void __fastcall EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUpValIconComponent__GetInvalidEquipEventUpByRarity(
        EventUpValIconComponent_o *this,
        int32_t equipSvtId,
        EventMargeItemUpValInfo_o *eventUpValItem,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v14; // x21
  __int64 v15; // x2
  int v16; // w9
  void *v17; // x20
  int32_t v18; // w8
  __int64 v19; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t actMaxRarity; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B43E9D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, *(_QWORD *)&equipSvtId);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    byte_4B43E9D = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !eventUpValItem || !Instance )
    goto LABEL_23;
  if ( !PartyOrganizationUtility__IsRarityRestriction(
          (PartyOrganizationUtility_o *)Instance,
          &skillName,
          &actMaxRarity,
          this->fields.servantId,
          this->fields.servantRarity,
          equipSvtId,
          eventUpValItem->fields.eventId,
          0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object
    || (v14 = (SkillLvMaster_o *)Instance,
        Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Master_object, equipSvtId, 0LL),
        actMaxRarity = 0,
        !Instance) )
  {
LABEL_23:
    sub_1BDBAD4(Instance, v12);
  }
  v16 = *((_DWORD *)Instance + 6);
  v17 = Instance;
  if ( v16 < 1 )
    return 0;
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)v16 )
      sub_1BDBADC(Instance, v12, v15);
    v19 = *((_QWORD *)v17 + v18 + 4);
    if ( !v19 )
      goto LABEL_23;
    if ( *(_DWORD *)(v19 + 48) )
    {
      if ( !v14 )
        goto LABEL_23;
      Instance = SkillLvMaster__GetEntity(v14, *(_DWORD *)(v19 + 28), 1, 0LL);
      if ( Instance )
      {
        funcGroupEntity = eventUpValItem->fields.funcGroupEntity;
        if ( !funcGroupEntity )
          goto LABEL_23;
        Instance = (void *)System_Array__IndexOf_int_(
                             *((System_Int32_array **)Instance + 4),
                             funcGroupEntity->fields.funcId,
                             (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)Instance & 0x80000000) == 0 )
          return 1;
      }
    }
    v18 = actMaxRarity + 1;
    actMaxRarity = v18;
    v16 = *((_DWORD *)v17 + 6);
    if ( v18 >= v16 )
      return 0;
  }
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
    sub_1BDBAD4(0LL, v6);
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
  System_Int32_array *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4B43E99 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, eventUpValItemList);
    byte_4B43E99 = 1;
  }
  v11 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
  if ( !v11 )
    sub_1BDBAD4(0LL, v12);
  if ( !v11->max_length )
    sub_1BDBADC(v11, v12, v11);
  v11->m_Items[1] = equipSvtId;
  EventUpValIconComponent__Set_39896708(this, eventUpValItemList, v11, servantId, servantRarity, v13);
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

  if ( (byte_4B43E9E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B43E9E = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite || !this->fields.paramLabel )
    goto LABEL_26;
  v6 = this->fields.invalid ? 140LL : 124LL;
  v7 = this->fields.invalid ? 136LL : 120LL;
  v8 = this->fields.invalid ? 132LL : 116LL;
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
    sub_1BDBAD4(iconSprite, method);
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

  if ( (byte_4B43E9B & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_4B43E9B = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_1BDBAD4(0LL, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 gameObject; // x0
  __int64 messageMaxWidth; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  EventMargeItemUpValInfo_o *v18; // x2
  const MethodInfo *v19; // x3
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  EventMargeItemUpValInfo_o *v21; // x1
  __int64 *v22; // x21
  UIWidget_o *paramLabel; // x22
  UILabel_o *v24; // x22
  __int64 v25; // x8
  UILabel_o *v26; // x22
  int32_t v27; // w1
  UILabel_o *v28; // x22
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s10
  float v33; // s8
  float v34; // s9
  unsigned int localPosition; // s0
  float v36; // s11
  float v37; // s0
  UIWidget_o *v38; // x22
  float v39; // s12
  float v40; // s0
  int32_t v41; // w1
  UILabel_o *v42; // x22
  UnityEngine_Transform_o *v43; // x22
  UnityEngine_Object_o *eventLogoSprite; // x22
  __int64 v45; // x8
  int v46; // w8
  int *v47; // x0
  UISprite_o *v48; // x22
  bool v49; // w22
  System_String_o *v50; // x0
  System_String_o *v51; // x23
  UnityEngine_Object_o *eventNameBackSprite; // x23
  int32_t alignment; // w8
  const MethodInfo *v54; // x3
  struct System_Int32_array *equipSvtIds; // x21
  int max_length; // w8
  System_Func_int__bool__o *v57; // x22
  int v58; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B43E9C & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&num);
    sub_1BDB878(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_1BDB878(&EventUpValIconComponent_TypeInfo, v6);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v7);
    sub_1BDB878(&System_Math_TypeInfo, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&Method_EventUpValIconComponent___c__DisplayClass24_0__SetParam_b__0__, v10);
    sub_1BDB878(&EventUpValIconComponent___c__DisplayClass24_0_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_19220/*"event_logo_mini_"*/, v12);
    byte_4B43E9C = 1;
  }
  v58 = 0;
  v13 = sub_1BDBAC4(EventUpValIconComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_106;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  eventUpValItemList = this->fields.eventUpValItemList;
  this->fields.invalid = 0;
  if ( !eventUpValItemList )
    goto LABEL_106;
  if ( eventUpValItemList->max_length <= num )
    goto LABEL_107;
  v21 = eventUpValItemList->m_Items[num];
  *(_QWORD *)(v13 + 24) = v21;
  v22 = (__int64 *)(v13 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v21, (int32_t)v18, v19);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = *v22;
  if ( !*v22 )
    goto LABEL_106;
  EventMargeItemUpValInfo__SetIcon((EventMargeItemUpValInfo_o *)gameObject, this->fields.iconSprite, 0LL);
  gameObject = (__int64)EventUpValIconComponent_TypeInfo;
  paramLabel = (UIWidget_o *)this->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !paramLabel )
    goto LABEL_106;
  UIWidget__set_width(paramLabel, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0LL);
  gameObject = *v22;
  if ( !*v22 )
    goto LABEL_106;
  v24 = this->fields.paramLabel;
  gameObject = (__int64)EventMargeItemUpValInfo__GetEventUpString((EventMargeItemUpValInfo_o *)gameObject, 0LL);
  if ( !v24 )
    goto LABEL_106;
  UILabel__set_text(v24, (System_String_o *)gameObject, 0LL);
  v25 = *v22;
  if ( !*v22 )
    goto LABEL_106;
  if ( *(_BYTE *)(v25 + 128) )
  {
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    v60.fields.r = 1.0;
    v60.fields.g = 1.0;
    v60.fields.b = 0.0;
    v60.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v60, 0LL);
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    UILabel__set_fontSize((UILabel_o *)gameObject, 13, 0LL);
    gameObject = (__int64)EventUpValIconComponent_TypeInfo;
    v26 = this->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v26 )
      goto LABEL_106;
    UILabel__SetCondensedScale(v26, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0LL);
LABEL_21:
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    v27 = 1;
    goto LABEL_31;
  }
  gameObject = (__int64)this->fields.paramLabel;
  if ( !*(_BYTE *)(v25 + 165) )
  {
    if ( !gameObject )
      goto LABEL_106;
    v62.fields.r = 1.0;
    v62.fields.g = 1.0;
    v62.fields.b = 1.0;
    v62.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v62, 0LL);
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    UILabel__set_fontSize((UILabel_o *)gameObject, 15, 0LL);
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    v43 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4B3E916 )
    {
      gameObject = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, messageMaxWidth);
      byte_4B3E916 = 1;
    }
    if ( !v43 )
      goto LABEL_106;
    UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    goto LABEL_21;
  }
  if ( !gameObject )
    goto LABEL_106;
  v61.fields.r = 1.0;
  v61.fields.g = 1.0;
  v61.fields.b = 1.0;
  v61.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v61, 0LL);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  UILabel__set_fontSize((UILabel_o *)gameObject, 13, 0LL);
  gameObject = (__int64)EventUpValIconComponent_TypeInfo;
  v28 = this->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !v28 )
    goto LABEL_106;
  UILabel__SetCondensedScale(v28, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0LL);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  v27 = 2;
LABEL_31:
  UILabel__set_alignment((UILabel_o *)gameObject, v27, 0LL);
  gameObject = (__int64)this->fields.baseObject;
  if ( !gameObject )
    goto LABEL_106;
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_106;
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  v32 = v29;
  v33 = v30;
  v34 = v31;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_106;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  v36 = *(float *)&localPosition;
  LODWORD(v37) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
  gameObject = (__int64)System_Math_TypeInfo;
  v38 = (UIWidget_o *)this->fields.paramLabel;
  v39 = v37;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v38 )
    goto LABEL_106;
  v40 = ceilf(v39);
  v41 = v40 == INFINITY ? 0x80000000 : (int)v40;
  UIWidget__set_width(v38, v41, 0LL);
  if ( !*v22 )
    goto LABEL_106;
  if ( *(_BYTE *)(*v22 + 136) )
  {
    gameObject = (__int64)EventUpValIconComponent_TypeInfo;
    v42 = this->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v42 )
      goto LABEL_106;
    LODWORD(messageMaxWidth) = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    messageMaxWidth = (unsigned int)this->fields.messageMaxWidth;
    v42 = this->fields.paramLabel;
    if ( (int)messageMaxWidth < 1 )
    {
      gameObject = (__int64)EventUpValIconComponent_TypeInfo;
      if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
      if ( !v42 )
        goto LABEL_106;
      LODWORD(messageMaxWidth) = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v42 )
    {
      goto LABEL_106;
    }
  }
  UILabel__SetCondensedScale(v42, messageMaxWidth, 0, 0LL);
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.eventLogoSprite;
    if ( !gameObject )
      goto LABEL_106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v45 = *v22;
    if ( !*v22 )
      goto LABEL_106;
    if ( *(_BYTE *)(v45 + 148) )
    {
      v46 = *(_DWORD *)(v45 + 16);
      v47 = &v58;
      if ( !v46 )
        v46 = 80368;
      v58 = v46;
      v48 = this->fields.eventLogoSprite;
    }
    else
    {
      v48 = this->fields.eventLogoSprite;
      LODWORD(v47) = v45 + 16;
    }
    v50 = System_Int32__ToString((int32_t)v47, 0LL);
    v51 = System_String__Concat_62572260((System_String_o *)StringLiteral_19220/*"event_logo_mini_"*/, v50, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v49 = AtlasManager__SetBanner(v48, v51, 0LL);
  }
  else
  {
    v49 = 0;
  }
  eventNameBackSprite = (UnityEngine_Object_o *)this->fields.eventNameBackSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventNameBackSprite, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.eventNameBackSprite;
    if ( !gameObject )
      goto LABEL_106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v49, 0LL);
  }
  alignment = this->fields.alignment;
  if ( alignment )
  {
    if ( alignment == 1 )
    {
      v32 = 0.0;
    }
    else if ( alignment == 2 )
    {
      gameObject = (__int64)this->fields.paramLabel;
      if ( !gameObject )
        goto LABEL_106;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_106;
      v32 = -(float)(v36
                   + (float)(v39
                           * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL))));
    }
  }
  else
  {
    v32 = (float)(v36 + v39) * -0.5;
  }
  if ( !*v22 )
    goto LABEL_106;
  gameObject = (__int64)this->fields.baseObject;
  if ( *(_BYTE *)(*v22 + 165) )
    v32 = v32 + -0.5;
  if ( !gameObject )
    goto LABEL_106;
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_106;
  v59.fields.x = v32;
  v59.fields.y = v33;
  v59.fields.z = v34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v59, 0LL);
  v18 = (EventMargeItemUpValInfo_o *)*v22;
  if ( !*v22 )
    goto LABEL_106;
  if ( !v18->fields.funcGroupEntity )
    return;
  equipSvtIds = this->fields.equipSvtIds;
  if ( !equipSvtIds )
LABEL_106:
    sub_1BDBAD4(gameObject, messageMaxWidth);
  max_length = equipSvtIds->max_length;
  if ( max_length >= 2 )
  {
    v57 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v57,
      (Il2CppObject *)v13,
      Method_EventUpValIconComponent___c__DisplayClass24_0__SetParam_b__0__,
      0LL);
    if ( !System_Linq_Enumerable__All_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)equipSvtIds,
            (System_Func_TSource__bool__o *)v57,
            (const MethodInfo_303D8D0 *)Method_System_Linq_Enumerable_All_int___) )
      return;
    goto LABEL_104;
  }
  if ( !max_length )
LABEL_107:
    sub_1BDBADC(gameObject, messageMaxWidth, v18);
  if ( !EventUpValIconComponent__GetInvalidEquipEventUpByRarity(this, equipSvtIds->m_Items[1], v18, v54) )
    return;
LABEL_104:
  this->fields.invalid = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValIconComponent__Set_39896708(
        EventUpValIconComponent_o *this,
        EventMargeItemUpValInfo_array *eventUpValItemList,
        System_Int32_array *equipSvtIds,
        int32_t servantId,
        int32_t servantRarity,
        const MethodInfo *method)
{
  System_Int32_array *v8; // x20
  __int64 v11; // x1
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x0
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1

  v8 = equipSvtIds;
  if ( (byte_4B43E9A & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, eventUpValItemList);
    sub_1BDB878(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v11);
    byte_4B43E9A = 1;
  }
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    this->fields.eventUpValItemList = eventUpValItemList;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)p_eventUpValItemList,
      (int32_t)eventUpValItemList,
      (int32_t)equipSvtIds,
      *(const MethodInfo **)&servantId);
    this->fields.servantId = servantId;
    this->fields.servantRarity = servantRarity;
    if ( !v8 || !*(_QWORD *)&v8->max_length )
    {
      Instance = (Il2CppObject *)sub_1BDB920(int___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_13;
      v8 = (System_Int32_array *)Instance;
      if ( !LODWORD(Instance[1].monitor) )
        sub_1BDBADC(Instance, v16, v13);
      LODWORD(Instance[2].klass) = -1;
    }
    this->fields.equipSvtIds = v8;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipSvtIds, (int32_t)v8, v13, v14);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( Instance )
    {
      SwitchParameterDisplayManager__AddComponent(
        (SwitchParameterDisplayManager_o *)Instance,
        (SwitchParameterDisplayComponent_o *)this,
        0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( Instance )
      {
        EventUpValIconComponent__SetIconLabel(this, (int32_t)Instance[3].klass, v17);
        return;
      }
    }
LABEL_13:
    sub_1BDBAD4(Instance, v16);
  }
  this->fields.eventUpValItemList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)p_eventUpValItemList, 0, (int32_t)equipSvtIds, *(const MethodInfo **)&servantId);
  EventUpValIconComponent__ClearParam(this, v18);
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


void __fastcall EventUpValIconComponent___c__DisplayClass24_0___ctor(
        EventUpValIconComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventUpValIconComponent___c__DisplayClass24_0___SetParam_b__0(
        EventUpValIconComponent___c__DisplayClass24_0_o *this,
        int32_t equipSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, equipSvtId);
  return EventUpValIconComponent__GetInvalidEquipEventUpByRarity(
           this->fields.__4__this,
           equipSvtId,
           this->fields.eventUpValItem,
           v3);
}