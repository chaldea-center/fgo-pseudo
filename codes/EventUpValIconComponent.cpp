void EventUpValIconComponent___cctor(const MethodInfo *method)
{
  struct EventUpValIconComponent_StaticFields *static_fields; // x8

  if ( (byte_4CEDA71 & 1) == 0 )
  {
    sub_1C7BAE8(&EventUpValIconComponent_TypeInfo);
    byte_4CEDA71 = 1;
  }
  static_fields = EventUpValIconComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0x60000003E8LL;
  static_fields->NORMAL_MESSAGE_MAX_WIDTH = 112;
}


void EventUpValIconComponent___ctor(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.COLOR_NORMAL = _Q1;
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_CF65D0;
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0);
}


void EventUpValIconComponent__Clear(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.eventUpValItemList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.eventUpValItemList, 0, v2, v3, v4, v5, v6, v7);
  EventUpValIconComponent__ClearParam(this, v9);
}


void EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


bool EventUpValIconComponent__GetInvalidEquipEventUpByRarity(
        EventUpValIconComponent_o *this,
        int32_t equipSvtId,
        EventMargeItemUpValInfo_o *eventUpValItem,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v10; // x21
  int v11; // w9
  void *v12; // x20
  int32_t v13; // w8
  __int64 v14; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t actMaxRarity; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEDA6F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_int___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEDA6F = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object
    || (v10 = (SkillLvMaster_o *)Instance,
        Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Master_object, equipSvtId, 0),
        actMaxRarity = 0,
        !Instance) )
  {
LABEL_23:
    sub_1C7BD40(Instance, v8);
  }
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v11 )
      sub_1C7BD48(Instance);
    v14 = *((_QWORD *)v12 + v13 + 4);
    if ( !v14 )
      goto LABEL_23;
    if ( *(_DWORD *)(v14 + 48) )
    {
      if ( !v10 )
        goto LABEL_23;
      Instance = SkillLvMaster__GetEntity(v10, *(_DWORD *)(v14 + 28), 1, 0);
      if ( Instance )
      {
        funcGroupEntity = eventUpValItem->fields.funcGroupEntity;
        if ( !funcGroupEntity )
          goto LABEL_23;
        Instance = (void *)System_Array__IndexOf_int_(
                             *((System_Int32_array **)Instance + 4),
                             funcGroupEntity->fields.funcId,
                             (const MethodInfo_3275200 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)Instance & 0x80000000) == 0 )
          return 1;
      }
    }
    v13 = actMaxRarity + 1;
    actMaxRarity = v13;
    v11 = *((_DWORD *)v12 + 6);
    if ( v13 >= v11 )
      return 0;
  }
}


void EventUpValIconComponent__OnDestroy(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  ;
}


bool EventUpValIconComponent__ParameterChange(EventUpValIconComponent_o *this, int32_t count, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool activeSelf; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v6);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( activeSelf )
    EventUpValIconComponent__SetIconLabel(this, count, v7);
  return activeSelf;
}


void EventUpValIconComponent__Set(
        EventUpValIconComponent_o *this,
        EventMargeItemUpValInfo_array *eventUpValItemList,
        int32_t servantId,
        int32_t servantRarity,
        int32_t equipSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4CEDA6B & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CEDA6B = 1;
  }
  v11 = sub_1C7BB90(int___TypeInfo, 1);
  if ( !v11 )
    sub_1C7BD40(0, v12);
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1C7BD48(v11);
  *(_DWORD *)(v11 + 32) = equipSvtId;
  EventUpValIconComponent__Set_41449692(
    this,
    eventUpValItemList,
    (System_Int32_array *)v11,
    servantId,
    servantRarity,
    v13);
}


void EventUpValIconComponent__SetAlpha(EventUpValIconComponent_o *this, float alpha, const MethodInfo *method)
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

  if ( (byte_4CEDA70 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDA70 = 1;
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
  UIWidget__set_color(iconSprite, v14, 0);
  iconSprite = (UIWidget_o *)this->fields.paramLabel;
  if ( !iconSprite )
    goto LABEL_26;
  v15.fields.r = v9;
  v15.fields.g = v10;
  v15.fields.b = v11;
  v15.fields.a = alpha;
  UIWidget__set_color(iconSprite, v15, 0);
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventLogoSprite;
    if ( !iconSprite )
      goto LABEL_26;
    v16.fields.r = iconSprite->fields.mColor.fields.r;
    v16.fields.g = iconSprite->fields.mColor.fields.g;
    v16.fields.b = iconSprite->fields.mColor.fields.b;
    v16.fields.a = alpha;
    UIWidget__set_color(iconSprite, v16, 0);
  }
  eventNameBackSprite = (UnityEngine_Object_o *)this->fields.eventNameBackSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventNameBackSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventNameBackSprite;
    if ( iconSprite )
    {
      v17.fields.r = iconSprite->fields.mColor.fields.r;
      v17.fields.g = iconSprite->fields.mColor.fields.g;
      v17.fields.b = iconSprite->fields.mColor.fields.b;
      v17.fields.a = alpha;
      UIWidget__set_color(iconSprite, v17, 0);
      return;
    }
LABEL_26:
    sub_1C7BD40(iconSprite, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventUpValIconComponent__SetIconLabel(EventUpValIconComponent_o *this, int32_t count, const MethodInfo *method)
{
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v7; // x1
  float v8; // s0
  Il2CppObject *Instance; // x0

  if ( (byte_4CEDA6D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4CEDA6D = 1;
  }
  eventUpValItemList = this->fields.eventUpValItemList;
  if ( eventUpValItemList && (max_length = eventUpValItemList->max_length) != 0 )
  {
    if ( (_DWORD)max_length == 1 )
    {
      EventUpValIconComponent__SetParam(this, 0, method);
      v8 = 1.0;
    }
    else
    {
      EventUpValIconComponent__SetParam(this, count % (int)max_length, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v7);
      v8 = *((float *)&Instance[3].klass + 1);
    }
    EventUpValIconComponent__SetAlpha(this, v8, v7);
  }
  else
  {
    EventUpValIconComponent__ClearParam(this, *(const MethodInfo **)&count);
  }
}


void EventUpValIconComponent__SetParam(EventUpValIconComponent_o *this, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 gameObject; // x0
  __int64 messageMaxWidth; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  EventMargeItemUpValInfo_o *v21; // x1
  __int64 *v22; // x21
  UIWidget_o *paramLabel; // x22
  UILabel_o *v24; // x22
  __int64 v25; // x8
  UILabel_o *v26; // x22
  int32_t v27; // w1
  UILabel_o *v28; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  unsigned int v32; // s0
  float v33; // s11
  float v34; // s0
  UIWidget_o *v35; // x22
  float v36; // s12
  float v37; // s0
  int32_t v38; // w1
  UILabel_o *v39; // x22
  UnityEngine_Transform_o *v40; // x22
  UnityEngine_Object_o *eventLogoSprite; // x22
  __int64 v42; // x8
  int v43; // w8
  int *v44; // x0
  UISprite_o *v45; // x22
  bool v46; // w22
  System_String_o *v47; // x0
  System_String_o *v48; // x23
  UnityEngine_Object_o *eventNameBackSprite; // x23
  int32_t alignment; // w8
  const MethodInfo *v51; // x3
  EventMargeItemUpValInfo_o *v52; // x2
  struct System_Int32_array *equipSvtIds; // x21
  int max_length; // w8
  System_Func_int__bool__o *v55; // x22
  int v56; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEDA6E & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_All_int___);
    sub_1C7BAE8(&EventUpValIconComponent_TypeInfo);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_EventUpValIconComponent___c__DisplayClass24_0__SetParam_b__0__);
    sub_1C7BAE8(&EventUpValIconComponent___c__DisplayClass24_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19358/*"event_logo_mini_"*/);
    byte_4CEDA6E = 1;
  }
  v56 = 0;
  v5 = sub_1C7BD34(EventUpValIconComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_106;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  eventUpValItemList = this->fields.eventUpValItemList;
  this->fields.invalid = 0;
  if ( !eventUpValItemList )
    goto LABEL_106;
  if ( LODWORD(eventUpValItemList->max_length) <= num )
    goto LABEL_107;
  v21 = eventUpValItemList->m_Items[num];
  *(_QWORD *)(v5 + 24) = v21;
  v22 = (__int64 *)(v5 + 24);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v21, v14, v15, v16, v17, v18, v19);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = *v22;
  if ( !*v22 )
    goto LABEL_106;
  EventMargeItemUpValInfo__SetIcon((EventMargeItemUpValInfo_o *)gameObject, this->fields.iconSprite, 0);
  gameObject = (__int64)EventUpValIconComponent_TypeInfo;
  paramLabel = (UIWidget_o *)this->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !paramLabel )
    goto LABEL_106;
  UIWidget__set_width(paramLabel, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0);
  gameObject = *v22;
  if ( !*v22 )
    goto LABEL_106;
  v24 = this->fields.paramLabel;
  gameObject = (__int64)EventMargeItemUpValInfo__GetEventUpString((EventMargeItemUpValInfo_o *)gameObject, 0, 0);
  if ( !v24 )
    goto LABEL_106;
  UILabel__set_text(v24, (System_String_o *)gameObject, 0);
  v25 = *v22;
  if ( !*v22 )
    goto LABEL_106;
  if ( *(_BYTE *)(v25 + 128) )
  {
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    v59.fields.r = 1.0;
    v59.fields.g = 1.0;
    v59.fields.b = 0.0;
    v59.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v59, 0);
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    UILabel__set_fontSize((UILabel_o *)gameObject, 13, 0);
    gameObject = (__int64)EventUpValIconComponent_TypeInfo;
    v26 = this->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v26 )
      goto LABEL_106;
    UILabel__SetCondensedScale(v26, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0);
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
    v61.fields.r = 1.0;
    v61.fields.g = 1.0;
    v61.fields.b = 1.0;
    v61.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v61, 0);
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    UILabel__set_fontSize((UILabel_o *)gameObject, 15, 0);
    gameObject = (__int64)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_106;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    v40 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4CE7E5E )
    {
      gameObject = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v40 )
      goto LABEL_106;
    UnityEngine_Transform__set_localScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    goto LABEL_21;
  }
  if ( !gameObject )
    goto LABEL_106;
  v60.fields.r = 1.0;
  v60.fields.g = 1.0;
  v60.fields.b = 1.0;
  v60.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v60, 0);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  UILabel__set_fontSize((UILabel_o *)gameObject, 13, 0);
  gameObject = (__int64)EventUpValIconComponent_TypeInfo;
  v28 = this->fields.paramLabel;
  if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
  if ( !v28 )
    goto LABEL_106;
  UILabel__SetCondensedScale(v28, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  v27 = 2;
LABEL_31:
  UILabel__set_alignment((UILabel_o *)gameObject, v27, 0);
  gameObject = (__int64)this->fields.baseObject;
  if ( !gameObject )
    goto LABEL_106;
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_106;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_106;
  v32 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_106;
  v33 = *(float *)&v32;
  LODWORD(v34) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
  gameObject = (__int64)System_Math_TypeInfo;
  v35 = (UIWidget_o *)this->fields.paramLabel;
  v36 = v34;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v35 )
    goto LABEL_106;
  v37 = ceilf(v36);
  v38 = v37 == INFINITY ? 0x80000000 : (int)v37;
  UIWidget__set_width(v35, v38, 0);
  if ( !*v22 )
    goto LABEL_106;
  if ( *(_BYTE *)(*v22 + 136) )
  {
    gameObject = (__int64)EventUpValIconComponent_TypeInfo;
    v39 = this->fields.paramLabel;
    if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
    if ( !v39 )
      goto LABEL_106;
    LODWORD(messageMaxWidth) = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    messageMaxWidth = (unsigned int)this->fields.messageMaxWidth;
    v39 = this->fields.paramLabel;
    if ( (int)messageMaxWidth < 1 )
    {
      gameObject = (__int64)EventUpValIconComponent_TypeInfo;
      if ( !EventUpValIconComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo);
      if ( !v39 )
        goto LABEL_106;
      LODWORD(messageMaxWidth) = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v39 )
    {
      goto LABEL_106;
    }
  }
  UILabel__SetCondensedScale(v39, messageMaxWidth, 0, 0);
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.eventLogoSprite;
    if ( !gameObject )
      goto LABEL_106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v42 = *v22;
    if ( !*v22 )
      goto LABEL_106;
    if ( *(_BYTE *)(v42 + 148) )
    {
      v43 = *(_DWORD *)(v42 + 16);
      v44 = &v56;
      if ( !v43 )
        v43 = 80368;
      v56 = v43;
      v45 = this->fields.eventLogoSprite;
    }
    else
    {
      v45 = this->fields.eventLogoSprite;
      LODWORD(v44) = v42 + 16;
    }
    v47 = System_Int32__ToString((int32_t)v44, 0);
    v48 = System_String__Concat_64176912((System_String_o *)StringLiteral_19358/*"event_logo_mini_"*/, v47, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v46 = AtlasManager__SetBanner(v45, v48, 0);
  }
  else
  {
    v46 = 0;
  }
  eventNameBackSprite = (UnityEngine_Object_o *)this->fields.eventNameBackSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventNameBackSprite, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.eventNameBackSprite;
    if ( !gameObject )
      goto LABEL_106;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_106;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v46, 0);
  }
  alignment = this->fields.alignment;
  if ( alignment )
  {
    if ( alignment == 1 )
    {
      x = 0.0;
    }
    else if ( alignment == 2 )
    {
      gameObject = (__int64)this->fields.paramLabel;
      if ( !gameObject )
        goto LABEL_106;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_106;
      x = -(float)(v33
                 + (float)(v36
                         * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0))));
    }
  }
  else
  {
    x = (float)(v33 + v36) * -0.5;
  }
  if ( !*v22 )
    goto LABEL_106;
  gameObject = (__int64)this->fields.baseObject;
  if ( *(_BYTE *)(*v22 + 165) )
    x = x + -0.5;
  if ( !gameObject )
    goto LABEL_106;
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_106;
  v58.fields.x = x;
  v58.fields.y = y;
  v58.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v58, 0);
  v52 = (EventMargeItemUpValInfo_o *)*v22;
  if ( !*v22 )
    goto LABEL_106;
  if ( !v52->fields.funcGroupEntity )
    return;
  equipSvtIds = this->fields.equipSvtIds;
  if ( !equipSvtIds )
LABEL_106:
    sub_1C7BD40(gameObject, messageMaxWidth);
  max_length = equipSvtIds->max_length;
  if ( max_length >= 2 )
  {
    v55 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v55,
      (Il2CppObject *)v5,
      Method_EventUpValIconComponent___c__DisplayClass24_0__SetParam_b__0__,
      0);
    if ( !System_Linq_Enumerable__All_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)equipSvtIds,
            (System_Func_TSource__bool__o *)v55,
            (const MethodInfo_317A24C *)Method_System_Linq_Enumerable_All_int___) )
      return;
    goto LABEL_104;
  }
  if ( !max_length )
LABEL_107:
    sub_1C7BD48(gameObject);
  if ( !EventUpValIconComponent__GetInvalidEquipEventUpByRarity(this, equipSvtIds->m_Items[0], v52, v51) )
    return;
LABEL_104:
  this->fields.invalid = 1;
}


// local variable allocation has failed, the output may be wrong!
void EventUpValIconComponent__Set_41449692(
        EventUpValIconComponent_o *this,
        EventMargeItemUpValInfo_array *eventUpValItemList,
        System_Int32_array *equipSvtIds,
        int32_t servantId,
        int32_t servantRarity,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Int32_array *v10; // x20
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1

  v10 = equipSvtIds;
  if ( (byte_4CEDA6C & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4CEDA6C = 1;
  }
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    this->fields.eventUpValItemList = eventUpValItemList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)p_eventUpValItemList,
      (int32_t)eventUpValItemList,
      (int32_t)equipSvtIds,
      servantId,
      *(System_String_o **)&servantRarity,
      (int32_t)method,
      v6,
      v7);
    this->fields.servantId = servantId;
    this->fields.servantRarity = servantRarity;
    if ( !v10 || !v10->max_length )
    {
      Instance = (Il2CppObject *)sub_1C7BB90(int___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_13;
      v10 = (System_Int32_array *)Instance;
      if ( !LODWORD(Instance[1].monitor) )
        sub_1C7BD48(Instance);
      LODWORD(Instance[2].klass) = -1;
    }
    this->fields.equipSvtIds = v10;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipSvtIds, (int32_t)v10, v14, v15, v16, v17, v18, v19);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( Instance )
    {
      SwitchParameterDisplayManager__AddComponent(
        (SwitchParameterDisplayManager_o *)Instance,
        (SwitchParameterDisplayComponent_o *)this,
        0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( Instance )
      {
        EventUpValIconComponent__SetIconLabel(this, (int32_t)Instance[3].klass, v22);
        return;
      }
    }
LABEL_13:
    sub_1C7BD40(Instance, v21);
  }
  this->fields.eventUpValItemList = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)p_eventUpValItemList,
    0,
    (int32_t)equipSvtIds,
    servantId,
    *(System_String_o **)&servantRarity,
    (int32_t)method,
    v6,
    v7);
  EventUpValIconComponent__ClearParam(this, v23);
}


bool EventUpValIconComponent__UpdateAlpha(EventUpValIconComponent_o *this, float alpha, const MethodInfo *method)
{
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8

  eventUpValItemList = this->fields.eventUpValItemList;
  if ( eventUpValItemList && SLODWORD(eventUpValItemList->max_length) >= 2 )
    EventUpValIconComponent__SetAlpha(this, alpha, method);
  return 1;
}


void EventUpValIconComponent___c__DisplayClass24_0___ctor(
        EventUpValIconComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventUpValIconComponent___c__DisplayClass24_0___SetParam_b__0(
        EventUpValIconComponent___c__DisplayClass24_0_o *this,
        int32_t equipSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C7BD40(this, equipSvtId);
  return EventUpValIconComponent__GetInvalidEquipEventUpByRarity(
           this->fields.__4__this,
           equipSvtId,
           this->fields.eventUpValItem,
           v3);
}