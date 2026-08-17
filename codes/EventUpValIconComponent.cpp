void EventUpValIconComponent___cctor(const MethodInfo *method)
{
  struct EventUpValIconComponent_StaticFields *static_fields; // x8

  if ( (byte_596FB8A & 1) == 0 )
  {
    sub_2213A60(&EventUpValIconComponent_TypeInfo);
    byte_596FB8A = 1;
  }
  static_fields = EventUpValIconComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0x60000003E8LL;
  static_fields->NORMAL_MESSAGE_MAX_WIDTH = 112;
}


void EventUpValIconComponent___ctor(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_E9C1F0;
  this->fields.COLOR_NORMAL = _Q0;
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0);
}


void EventUpValIconComponent__Clear(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.eventUpValItemList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList, 0, v2, v3, v4, v5, v6, v7);
  EventUpValIconComponent__ClearParam(this, v9);
}


void EventUpValIconComponent__ClearParam(EventUpValIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
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
  __int64 v9; // x1
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v11; // x21
  int32_t v12; // w8
  void *v13; // x20
  int32_t v14; // w9
  __int64 v15; // x8
  struct FunctionGroupEntity_o *funcGroupEntity; // x8
  int32_t actMaxRarity; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FB88 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596FB88 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object
    || (v11 = (SkillLvMaster_o *)Instance,
        Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Master_object, equipSvtId, 0),
        actMaxRarity = 0,
        !Instance) )
  {
LABEL_23:
    sub_2213CDC(Instance, v8);
  }
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v12 )
      sub_2213CE4(Instance);
    v15 = *((_QWORD *)v13 + v14 + 4);
    if ( !v15 )
      goto LABEL_23;
    if ( *(_DWORD *)(v15 + 48) )
    {
      if ( !v11 )
        goto LABEL_23;
      Instance = SkillLvMaster__GetEntity(v11, *(_DWORD *)(v15 + 28), 1, 0);
      if ( Instance )
      {
        funcGroupEntity = eventUpValItem->fields.funcGroupEntity;
        if ( !funcGroupEntity )
          goto LABEL_23;
        Instance = (void *)System_Array__IndexOf_int_(
                             *((System_Int32_array **)Instance + 4),
                             funcGroupEntity->fields.funcId,
                             (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
        if ( ((unsigned int)Instance & 0x80000000) == 0 )
          return 1;
      }
    }
    v12 = *((_DWORD *)v13 + 6);
    v14 = ++actMaxRarity;
    if ( actMaxRarity >= v12 )
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
    sub_2213CDC(0, v6);
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

  if ( (byte_596FB84 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596FB84 = 1;
  }
  v11 = sub_2213B20(int___TypeInfo, 1);
  if ( !v11 )
    sub_2213CDC(0, v12);
  if ( !*(_DWORD *)(v11 + 24) )
    sub_2213CE4(v11);
  *(_DWORD *)(v11 + 32) = equipSvtId;
  EventUpValIconComponent__Set_47847584(
    this,
    eventUpValItemList,
    (System_Int32_array *)v11,
    servantId,
    servantRarity,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void EventUpValIconComponent__SetAlpha(EventUpValIconComponent_o *this, float alpha, const MethodInfo *method)
{
  UIWidget_o *iconSprite; // x0
  __int64 v6; // x9
  __int64 v7; // x8
  float v8; // s3 OVERLAPPED
  __int64 v9; // x10
  float v10; // s9
  float v11; // s10
  float v12; // s11
  float v13; // s0
  float v14; // s1
  float v15; // s2
  __int64 v16; // x1
  UnityEngine_Object_o *eventLogoSprite; // x20
  UnityEngine_Object_o *eventNameBackSprite; // x20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FB89 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB89 = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite || !this->fields.paramLabel )
    goto LABEL_23;
  v6 = 140;
  v7 = 120;
  v8 = alpha;
  if ( this->fields.invalid )
    v7 = 136;
  else
    v6 = 124;
  v9 = this->fields.invalid ? 132LL : 116LL;
  v10 = *(float *)((char *)&this->klass + v9);
  v11 = *(float *)((char *)&this->klass + v7);
  v12 = *(float *)((char *)&this->klass + v6);
  v13 = v10;
  v14 = v11;
  v15 = v12;
  UIWidget__set_color(iconSprite, *(UnityEngine_Color_o *)(&v8 - 3), 0);
  iconSprite = (UIWidget_o *)this->fields.paramLabel;
  if ( !iconSprite )
    goto LABEL_23;
  v19.fields.r = v10;
  v19.fields.g = v11;
  v19.fields.b = v12;
  v19.fields.a = alpha;
  UIWidget__set_color(iconSprite, v19, 0);
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventLogoSprite;
    if ( !iconSprite )
      goto LABEL_23;
    v20.fields.a = alpha;
    v20.fields.r = iconSprite->fields.mColor.fields.r;
    v20.fields.g = iconSprite->fields.mColor.fields.g;
    v20.fields.b = iconSprite->fields.mColor.fields.b;
    UIWidget__set_color(iconSprite, v20, 0);
  }
  eventNameBackSprite = (UnityEngine_Object_o *)this->fields.eventNameBackSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(eventNameBackSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.eventNameBackSprite;
    if ( iconSprite )
    {
      v21.fields.r = iconSprite->fields.mColor.fields.r;
      v21.fields.g = iconSprite->fields.mColor.fields.g;
      v21.fields.a = alpha;
      v21.fields.b = iconSprite->fields.mColor.fields.b;
      UIWidget__set_color(iconSprite, v21, 0);
      return;
    }
LABEL_23:
    sub_2213CDC(iconSprite, method);
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

  if ( (byte_596FB86 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_596FB86 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v7);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 messageMaxWidth; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x8
  EventMargeItemUpValInfo_o *v21; // x1
  EventMargeItemUpValInfo_o **v22; // x21
  UIWidget_o *paramLabel; // x22
  UILabel_o *v24; // x22
  UnityEngine_GameObject_o *v25; // x8
  UILabel_o *v26; // x22
  int32_t v27; // w1
  UILabel_o *v28; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  unsigned int v32; // s0
  float v33; // s11
  float v34; // s0
  float v35; // s12
  UIWidget_o *v36; // x22
  unsigned int v37; // w9
  int32_t v38; // w1
  UILabel_o *v39; // x22
  UnityEngine_Transform_o *v40; // x22
  __int64 v41; // x1
  UnityEngine_Object_o *eventLogoSprite; // x22
  __int64 v43; // x1
  EventMargeItemUpValInfo_o *v44; // x8
  UISprite_o *v45; // x22
  int eventId; // w8
  int32_t v47; // w1
  bool v48; // w22
  System_String_o *v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x23
  UnityEngine_Object_o *eventNameBackSprite; // x23
  int32_t alignment; // w8
  const MethodInfo *v54; // x3
  EventMargeItemUpValInfo_o *v55; // x2
  struct System_Int32_array *equipSvtIds; // x21
  int max_length; // w8
  System_Func_int__bool__o *v58; // x22
  int32_t EventLogoId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FB87 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_int___);
    sub_2213A60(&EventUpValIconComponent_TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventUpValIconComponent___c__DisplayClass24_0__SetParam_b__0__);
    sub_2213A60(&EventUpValIconComponent___c__DisplayClass24_0_TypeInfo);
    sub_2213A60(&StringLiteral_20109/*"event_logo_mini_"*/);
    byte_596FB87 = 1;
  }
  EventLogoId = 0;
  v5 = sub_2213CCC(EventUpValIconComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_110;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  eventUpValItemList = this->fields.eventUpValItemList;
  this->fields.invalid = 0;
  if ( !eventUpValItemList )
    goto LABEL_110;
  if ( LODWORD(eventUpValItemList->max_length) <= num )
    goto LABEL_111;
  v21 = eventUpValItemList->m_Items[num];
  *(_QWORD *)(v5 + 24) = v21;
  v22 = (EventMargeItemUpValInfo_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v21, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)*v22;
  if ( !*v22 )
    goto LABEL_110;
  EventMargeItemUpValInfo__SetIcon((EventMargeItemUpValInfo_o *)gameObject, this->fields.iconSprite, 0);
  gameObject = (UnityEngine_GameObject_o *)EventUpValIconComponent_TypeInfo;
  paramLabel = (UIWidget_o *)this->fields.paramLabel;
  if ( !*(&EventUpValIconComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, messageMaxWidth);
  if ( !paramLabel )
    goto LABEL_110;
  UIWidget__set_width(paramLabel, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0);
  gameObject = (UnityEngine_GameObject_o *)*v22;
  if ( !*v22 )
    goto LABEL_110;
  v24 = this->fields.paramLabel;
  gameObject = (UnityEngine_GameObject_o *)EventMargeItemUpValInfo__GetEventUpString(
                                             (EventMargeItemUpValInfo_o *)gameObject,
                                             0,
                                             0);
  if ( !v24 )
    goto LABEL_110;
  UILabel__set_text(v24, (System_String_o *)gameObject, 0);
  v25 = (UnityEngine_GameObject_o *)*v22;
  if ( !*v22 )
    goto LABEL_110;
  if ( LOBYTE(v25[5].monitor) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_110;
    v62.fields.b = 0.0;
    v62.fields.r = 1.0;
    v62.fields.g = 1.0;
    v62.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v62, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)gameObject, 13, 0);
    gameObject = (UnityEngine_GameObject_o *)EventUpValIconComponent_TypeInfo;
    v26 = this->fields.paramLabel;
    if ( !*(&EventUpValIconComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, messageMaxWidth);
    if ( !v26 )
      goto LABEL_110;
    UILabel__SetCondensedScale(v26, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0);
LABEL_21:
    gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_110;
    v27 = 1;
    goto LABEL_31;
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
  if ( !BYTE5(v25[6].fields.m_CachedPtr) )
  {
    if ( !gameObject )
      goto LABEL_110;
    v64.fields.r = 1.0;
    v64.fields.g = 1.0;
    v64.fields.b = 1.0;
    v64.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v64, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_110;
    UILabel__set_fontSize((UILabel_o *)gameObject, 15, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    v40 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_5969AE5 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v40 )
      goto LABEL_110;
    UnityEngine_Transform__set_localScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    goto LABEL_21;
  }
  if ( !gameObject )
    goto LABEL_110;
  v63.fields.r = 1.0;
  v63.fields.g = 1.0;
  v63.fields.b = 1.0;
  v63.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v63, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_110;
  UILabel__set_fontSize((UILabel_o *)gameObject, 13, 0);
  gameObject = (UnityEngine_GameObject_o *)EventUpValIconComponent_TypeInfo;
  v28 = this->fields.paramLabel;
  if ( !*(&EventUpValIconComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, messageMaxWidth);
  if ( !v28 )
    goto LABEL_110;
  UILabel__SetCondensedScale(v28, EventUpValIconComponent_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_110;
  v27 = 2;
LABEL_31:
  UILabel__set_alignment((UILabel_o *)gameObject, v27, 0);
  gameObject = this->fields.baseObject;
  if ( !gameObject )
    goto LABEL_110;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_110;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_110;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject )
    goto LABEL_110;
  v32 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
  if ( !gameObject )
    goto LABEL_110;
  v33 = *(float *)&v32;
  LODWORD(v34) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)System_Math_TypeInfo;
  v35 = v34;
  v36 = (UIWidget_o *)this->fields.paramLabel;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, messageMaxWidth);
  if ( !v36 )
    goto LABEL_110;
  v37 = vcvtps_s32_f32(v35);
  v38 = ceilf(v35) == INFINITY ? 0x80000000 : v37;
  UIWidget__set_width(v36, v38, 0);
  if ( !*v22 )
    goto LABEL_110;
  if ( (*v22)->fields.isServantPoint )
  {
    gameObject = (UnityEngine_GameObject_o *)EventUpValIconComponent_TypeInfo;
    v39 = this->fields.paramLabel;
    if ( !*(&EventUpValIconComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, messageMaxWidth);
    if ( !v39 )
      goto LABEL_110;
    LODWORD(messageMaxWidth) = EventUpValIconComponent_TypeInfo->static_fields->SERVANT_POINT_X_SIZE_MAX;
  }
  else
  {
    messageMaxWidth = (unsigned int)this->fields.messageMaxWidth;
    v39 = this->fields.paramLabel;
    if ( (int)messageMaxWidth < 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)EventUpValIconComponent_TypeInfo;
      if ( !*(&EventUpValIconComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventUpValIconComponent_TypeInfo, messageMaxWidth);
      if ( !v39 )
        goto LABEL_110;
      LODWORD(messageMaxWidth) = EventUpValIconComponent_TypeInfo->static_fields->NORMAL_MESSAGE_MAX_WIDTH;
    }
    else if ( !v39 )
    {
      goto LABEL_110;
    }
  }
  UILabel__SetCondensedScale(v39, messageMaxWidth, 0, 0);
  eventLogoSprite = (UnityEngine_Object_o *)this->fields.eventLogoSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(eventLogoSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventLogoSprite;
    if ( !gameObject )
      goto LABEL_110;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventAddMaster___);
    v44 = *v22;
    if ( !*v22 )
      goto LABEL_110;
    v45 = this->fields.eventLogoSprite;
    if ( v44->fields.isFriendshipUpForCampaign )
    {
      if ( !gameObject )
        goto LABEL_110;
      eventId = v44->fields.eventId;
      v47 = eventId ? eventId : 80368;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_110;
      v47 = v44->fields.eventId;
    }
    EventLogoId = EventAddMaster__GetEventLogoId((EventAddMaster_o *)gameObject, v47, 0);
    v49 = System_Int32__ToString((int32_t)&EventLogoId, 0);
    v51 = System_String__Concat_75651716((System_String_o *)StringLiteral_20109/*"event_logo_mini_"*/, v49, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v50);
    v48 = AtlasManager__SetBanner(v45, v51, 0);
  }
  else
  {
    v48 = 0;
  }
  eventNameBackSprite = (UnityEngine_Object_o *)this->fields.eventNameBackSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, messageMaxWidth);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(eventNameBackSprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventNameBackSprite;
    if ( !gameObject )
      goto LABEL_110;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive(gameObject, v48, 0);
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
      gameObject = (UnityEngine_GameObject_o *)this->fields.paramLabel;
      if ( !gameObject )
        goto LABEL_110;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        goto LABEL_110;
      x = -(float)(v33
                 + (float)(v35
                         * COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0))));
    }
  }
  else
  {
    x = (float)(v33 + v35) * -0.5;
  }
  if ( !*v22 )
    goto LABEL_110;
  gameObject = this->fields.baseObject;
  if ( (*v22)->fields.isNotClassBoard )
    x = x + -0.5;
  if ( !gameObject )
    goto LABEL_110;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_110;
  v61.fields.x = x;
  v61.fields.y = y;
  v61.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v61, 0);
  v55 = *v22;
  if ( !*v22 )
    goto LABEL_110;
  if ( !v55->fields.funcGroupEntity )
    return;
  equipSvtIds = this->fields.equipSvtIds;
  if ( !equipSvtIds )
LABEL_110:
    sub_2213CDC(gameObject, messageMaxWidth);
  max_length = equipSvtIds->max_length;
  if ( max_length >= 2 )
  {
    v58 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v58,
      (Il2CppObject *)v5,
      Method_EventUpValIconComponent___c__DisplayClass24_0__SetParam_b__0__,
      0);
    if ( !System_Linq_Enumerable__All_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)equipSvtIds,
            (System_Func_TSource__bool__o *)v58,
            (const MethodInfo_38646E0 *)Method_System_Linq_Enumerable_All_int___) )
      return;
    goto LABEL_108;
  }
  if ( !max_length )
LABEL_111:
    sub_2213CE4(gameObject);
  if ( !EventUpValIconComponent__GetInvalidEquipEventUpByRarity(this, equipSvtIds->m_Items[0], v55, v54) )
    return;
LABEL_108:
  this->fields.invalid = 1;
}


// local variable allocation has failed, the output may be wrong!
void EventUpValIconComponent__Set_47847584(
        EventUpValIconComponent_o *this,
        EventMargeItemUpValInfo_array *eventUpValItemList,
        System_Int32_array *equipSvtIds,
        int32_t servantId,
        int32_t servantRarity,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_Int32_array *v10; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1

  v10 = equipSvtIds;
  if ( (byte_596FB85 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_596FB85 = 1;
  }
  if ( eventUpValItemList )
  {
    this->fields.eventUpValItemList = eventUpValItemList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList,
      (int32_t)eventUpValItemList,
      (System_String_o *)equipSvtIds,
      *(System_String_o **)&servantId,
      servantRarity,
      (int32_t)method,
      v6,
      v7);
    this->fields.servantId = servantId;
    this->fields.servantRarity = servantRarity;
    if ( !v10 || !v10->max_length )
    {
      Instance = (Il2CppObject *)sub_2213B20(int___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_13;
      v10 = (System_Int32_array *)Instance;
      if ( !LODWORD(Instance[1].monitor) )
        sub_2213CE4(Instance);
      LODWORD(Instance[2].klass) = -1;
    }
    this->fields.equipSvtIds = v10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.equipSvtIds,
      (int32_t)v10,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( Instance )
    {
      SwitchParameterDisplayManager__AddComponent(
        (SwitchParameterDisplayManager_o *)Instance,
        (SwitchParameterDisplayComponent_o *)this,
        0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
      if ( Instance )
      {
        EventUpValIconComponent__SetIconLabel(this, (int32_t)Instance[3].klass, v21);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(Instance, v20);
  }
  this->fields.eventUpValItemList = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList,
    0,
    (System_String_o *)equipSvtIds,
    *(System_String_o **)&servantId,
    servantRarity,
    (int32_t)method,
    v6,
    v7);
  EventUpValIconComponent__ClearParam(this, v22);
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


// local variable allocation has failed, the output may be wrong!
bool EventUpValIconComponent___c__DisplayClass24_0___SetParam_b__0(
        EventUpValIconComponent___c__DisplayClass24_0_o *this,
        int32_t equipSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_2213CDC(this, *(_QWORD *)&equipSvtId);
  return EventUpValIconComponent__GetInvalidEquipEventUpByRarity(
           this->fields.__4__this,
           equipSvtId,
           this->fields.eventUpValItem,
           v3);
}